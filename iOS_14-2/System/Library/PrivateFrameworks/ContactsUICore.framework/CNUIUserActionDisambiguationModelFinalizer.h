/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNUIUserActionItem, NSMutableArray, NSArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSMutableArray* _actions;
	NSArray* _recentActions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * recentActions;                         //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,retain) NSArray * directoryServiceActions;               //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,retain) NSArray * foundOnDeviceActions;                  //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
+(id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(id)model;
-(NSMutableArray *)actions;
-(CNUIUserActionItem *)defaultAction;
-(NSArray *)recentActions;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(void)removeUninterestingItentActions;
-(void)removeDiscoveredActionsAlreadyCurated;
-(void)removeDuplicateIntentActionsFromSameProvider;
-(void)promoteLoneManagedCallProviderActionToBeDefault;
-(void)promoteLoneActionToBeDefault;
-(void)removeDefaultActionFromListOfActions;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(void)setRecentActions:(NSArray *)arg1 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
@end

