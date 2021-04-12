/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBActivationSettings, NSSet;

@interface SBIconLaunchContext : NSObject {

	SBActivationSettings* _activationSettings;
	NSSet* _actions;

}

@property (nonatomic,retain) SBActivationSettings * activationSettings;              //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                          //@synthesize actions=_actions - In the implementation block
-(void)setActions:(NSSet *)arg1 ;
-(NSSet *)actions;
-(void)setActivationSettings:(SBActivationSettings *)arg1 ;
-(SBActivationSettings *)activationSettings;
@end

