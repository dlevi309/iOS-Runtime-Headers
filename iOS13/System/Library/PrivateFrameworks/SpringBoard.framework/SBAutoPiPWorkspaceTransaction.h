/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 entityFoundBlock:(/*^block*/id)arg2 ;
+(BOOL)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 ;
+(BOOL)_shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 transientOverlayEntityFoundBlock:(/*^block*/id)arg2 appEntityFoundBlock:(/*^block*/id)arg3 ;
+(BOOL)isSystemGesture:(id)arg1 ;
+(long long)transitionStyleForProcessIdentifier:(int)arg1 entityToPiP:(id)arg2 withTransitionContext:(id)arg3 request:(id)arg4 ;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_didComplete;
-(void)setTransitionStyle:(long long)arg1 ;
-(long long)transitionStyle;
-(long long)_transitionStyle;
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBWorkspaceEntity *)entityToPiP;
-(id)initWithTransitionRequest:(id)arg1 includeActiveAppEntity:(BOOL)arg2 ;
@end

