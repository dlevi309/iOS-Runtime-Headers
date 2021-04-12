/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate, SBFluidSwitcherScrollProviding;
@class SBSwitcherModifier, NSString;

@interface SBHistorianSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding> {

	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
	id<SBHistorianSwitcherModifierDelegate> _historianDelegate;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _rootModifier;

}

@property (assign,nonatomic,__weak) id<SBHistorianSwitcherModifierDelegate> historianDelegate;                //@synthesize historianDelegate=_historianDelegate - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier*<SBFluidSwitcherScrollProviding> rootModifier;              //@synthesize rootModifier=_rootModifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;                //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
+(BOOL)canLogEvent:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(SBSwitcherModifier*<SBFluidSwitcherScrollProviding>)rootModifier;
-(id)initWithRootModifier:(id)arg1 ;
-(void)setHistorianDelegate:(id<SBHistorianSwitcherModifierDelegate>)arg1 ;
-(id)_eventSnapshotFromEvent:(id)arg1 ;
-(id)_actionSnapshotFromAction:(id)arg1 ;
-(id)_modifierStackSnapshotFromModifier:(id)arg1 ;
-(id<SBHistorianSwitcherModifierDelegate>)historianDelegate;
-(id)_querySnapshotFromModifier:(id)arg1 ;
-(void)_populateIndexedQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(/*^block*/id)arg4 appLayouts:(id)arg5 ;
-(void)_populateQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(/*^block*/id)arg4 appLayouts:(id)arg5 ;
@end

