//
//  UniCall.h
//  Uni Call
//
//  Created by Guan Gui on 2/05/13.
//  Copyright (c) 2013 Guan Gui. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UniCall : NSObject

+ (void)pushNotificationWithTitle:(NSString *)title andMessage:(NSString *)message andDetail:(NSString *)detail;

-(NSString *)process:(NSString *)query;

@end
