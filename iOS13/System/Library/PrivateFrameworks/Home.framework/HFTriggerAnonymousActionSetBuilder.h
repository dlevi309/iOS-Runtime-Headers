/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFActionSetBuilderProtocol.h>

@class NSArray, HFMediaPlaybackActionBuilder, HMTrigger, HFMutableSetDiff, HMActionSet, NSString;

@interface HFTriggerAnonymousActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol> {

	NSArray* _actions;
	HMTrigger* _containingTrigger;
	unsigned long long _actionSetType;
	HFMutableSetDiff* _actionBuilders;

}

@property (nonatomic,retain) HFMutableSetDiff * actionBuilders;                                    //@synthesize actionBuilders=_actionBuilders - In the implementation block
@property (nonatomic,retain) HMTrigger * containingTrigger;                                        //@synthesize containingTrigger=_containingTrigger - In the implementation block
@property (assign,nonatomic) unsigned long long actionSetType;                                     //@synthesize actionSetType=_actionSetType - In the implementation block
@property (nonatomic,retain) HMActionSet * actionSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * actions;                                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
@property (nonatomic,readonly) HFMediaPlaybackActionBuilder * mediaAction; 
+(Class)homeKitRepresentationClass;
-(void)removeAllActions;
-(unsigned long long)actionSetType;
-(void)addAction:(id)arg1 ;
-(NSArray *)actions;
-(BOOL)hasActions;
-(BOOL)requiresDeviceUnlock;
-(void)setActionSetType:(unsigned long long)arg1 ;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(HMActionSet *)actionSet;
-(void)removeAction:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(void)setActionBuilders:(HFMutableSetDiff *)arg1 ;
-(HFMutableSetDiff *)actionBuilders;
-(id)_existingActionBuilder:(id)arg1 inSet:(id)arg2 ;
-(BOOL)isAffectedByEndEvents;
-(HMTrigger *)containingTrigger;
-(id)_lazilyUpdateActions;
-(void)updateAction:(id)arg1 ;
-(HFMediaPlaybackActionBuilder *)mediaAction;
-(id)getOrCreateActionSet;
-(void)addAction:(id)arg1 actionSetType:(unsigned long long)arg2 ;
-(void)updateActionBuildersDiff:(id)arg1 ;
-(void)setContainingTrigger:(HMTrigger *)arg1 ;
@end

