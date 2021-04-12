/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBActivationSettings, NSSet;

@interface SBIconLaunchContext : NSObject {

	SBActivationSettings* _activationSettings;
	NSSet* _actions;

}

@property (nonatomic,retain) SBActivationSettings * activationSettings;              //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                          //@synthesize actions=_actions - In the implementation block
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(SBActivationSettings *)activationSettings;
-(void)setActivationSettings:(SBActivationSettings *)arg1 ;
@end

