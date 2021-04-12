/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFActionSetBuilderProtocol.h>

@protocol HFIconDescriptor;
@class NSArray, NSString, HFMutableSetDiff, HMActionSet, HFMediaPlaybackActionBuilder;

@interface HFActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol> {

	BOOL _isFavorite;
	NSArray* _actions;
	NSString* _name;
	id<HFIconDescriptor> _iconDescriptor;
	HFMutableSetDiff* _actionBuilders;

}

@property (nonatomic,retain) HFMutableSetDiff * actionBuilders;                                    //@synthesize actionBuilders=_actionBuilders - In the implementation block
@property (nonatomic,readonly) HMActionSet * actionSet; 
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                                      //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;                                  //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * actions;                                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
@property (nonatomic,readonly) HFMediaPlaybackActionBuilder * mediaAction; 
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(NSArray *)actions;
-(BOOL)isFavorite;
-(void)setIsFavorite:(BOOL)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(HMActionSet *)actionSet;
-(void)removeAction:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(void)setActionBuilders:(HFMutableSetDiff *)arg1 ;
-(HFMutableSetDiff *)actionBuilders;
-(BOOL)isAffectedByEndEvents;
-(id)_lazilyUpdateActions;
-(void)updateAction:(id)arg1 ;
-(id)deleteActionSet;
-(HFMediaPlaybackActionBuilder *)mediaAction;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)_lazilyUpdateFavorite;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(id)_deleteActionSet:(id)arg1 fromHome:(id)arg2 ;
-(id)_lazilyUpdateIcon;
@end

