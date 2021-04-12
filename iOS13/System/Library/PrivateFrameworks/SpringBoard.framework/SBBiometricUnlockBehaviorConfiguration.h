/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricUnlockBehaviorConfiguration <NSObject>
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate; 
@required
-(id<SBBiometricUnlockBehaviorConfigurationDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)newBehaviorForCurrentConfiguration;

@end

