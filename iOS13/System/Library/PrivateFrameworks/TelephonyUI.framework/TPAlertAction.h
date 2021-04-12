/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <UIKitCore/UIAlertAction.h>

@interface TPAlertAction : UIAlertAction {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
+(id)actionWithType:(unsigned long long)arg1 ;
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)preferencesURLForClassName:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

