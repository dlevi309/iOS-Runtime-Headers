/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@protocol BPSBuddyController <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
-(id)viewController;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)holdBeforeDisplaying;

@required
-(id)delegate;
-(void)setDelegate:(id)arg1;

@end

