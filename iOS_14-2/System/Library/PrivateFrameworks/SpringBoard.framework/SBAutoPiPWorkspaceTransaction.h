/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceTransaction.h>

@class SBWorkspaceEntity, NSString;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction {

	int _pidToPiP;
	SBWorkspaceEntity* _entityToPiP;
	long long _transitionStyle;
	long long _inferredTransitionStyle;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) SBWorkspaceEntity * entityToPiP;              //@synthesize entityToPiP=_entityToPiP - In the implementation block
@property (assign,nonatomic) long long transitionStyle;                           //@synthesize transitionStyle=_transitionStyle - In the implementation block
+(long long)transitionStyleForProcessIdentifier:(int)arg1 entityToPiP:(id)arg2 withTransitionContext:(id)arg3 request:(id)arg4 ;
+(BOOL)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 entityFoundBlock:(/*^block*/id)arg2 ;
+(BOOL)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
-(id)initWithTransitionRequest:(id)arg1 ;
-(long long)transitionStyle;
-(void)setTransitionStyle:(long long)arg1 ;
-(SBWorkspaceEntity *)entityToPiP;
-(id)initWithTransitionRequest:(id)arg1 includeActiveAppEntity:(BOOL)arg2 ;
@end

