/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/SBGridLayoutSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBGridSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate, SBFluidSwitcherScrollProviding;
@class SBGridLayoutSwitcherModifier, SBSwitcherModifier, NSString;

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier <SBGridLayoutSwitcherModifierDelegate, SBGridSwitcherScrollProviding> {

	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	unsigned long long _initialNumberOfRows;
	double _initialCardScale;
	BOOL _hasForegroundMainApp;
	BOOL _isTethered;
	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;
	NSString* _appExposeBundleID;

}

@property (nonatomic,readonly) BOOL isTethered;                                                                       //@synthesize isTethered=_isTethered - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier*<SBFluidSwitcherScrollProviding> multitaskingModifier;              //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) double cardScale; 
@property (nonatomic,copy,readonly) NSString * appExposeBundleID;                                                     //@synthesize appExposeBundleID=_appExposeBundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;                        //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,readonly) double effectiveHorizontalSpacing; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(CGSize)contentSize;
-(unsigned long long)numberOfRows;
-(BOOL)isScrollEnabled;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(double)dimmingAlpha;
-(SBSwitcherModifier*<SBFluidSwitcherScrollProviding>)multitaskingModifier;
-(long long)backdropBlurType;
-(NSRange)fullSizeSnapshotsRange;
-(double)backdropBlurProgress;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)cardScale;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)isTetheredScrollingEnabled;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(double)effectiveHorizontalSpacing;
-(unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleTetheredRemovalEvent:(id)arg1 ;
-(id)handleTetheredInsertionEvent:(id)arg1 ;
-(id)initWithTetheredMode:(BOOL)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3 ;
-(unsigned long long)_gridLayoutNumberOfRows;
-(double)_gridLayoutScale;
-(BOOL)_isGridified;
-(double)leadingPadding;
-(double)trailingPadding;
-(id)initWithTetheredMode:(BOOL)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3 initialNumberOfRows:(unsigned long long)arg4 initialCardScale:(double)arg5 ;
-(BOOL)isTethered;
-(NSString *)appExposeBundleID;
@end

