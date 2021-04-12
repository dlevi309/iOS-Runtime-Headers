/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <UIKitCore/UIAlertAction.h>

@interface TPAlertAction : UIAlertAction {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)actionWithType:(unsigned long long)arg1 ;
+(id)preferencesURLForClassName:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
@end

