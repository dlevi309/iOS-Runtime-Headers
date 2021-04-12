/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@protocol BPSBuddyController <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
-(id)viewController;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)holdBeforeDisplaying;

@required
-(id)delegate;
-(void)setDelegate:(id)arg1;

@end

