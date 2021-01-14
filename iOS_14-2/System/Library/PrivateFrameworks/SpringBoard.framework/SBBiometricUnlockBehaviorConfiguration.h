/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricUnlockBehaviorConfiguration <NSObject>
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate; 
@required
-(id<SBBiometricUnlockBehaviorConfigurationDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)newBehaviorForCurrentConfiguration;

@end

