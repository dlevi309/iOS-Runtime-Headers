/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSArray* _actions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * directoryServiceActions;                 //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,copy) NSArray * foundOnDeviceActions;                    //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
+(id)emptyModel;
-(void)setActions:(NSArray *)arg1 ;
-(id)allActions;
-(NSArray *)actions;
-(id)description;
-(CNUIUserActionItem *)defaultAction;
-(BOOL)isEmpty;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
-(id)initWithModel:(id)arg1 actions:(id)arg2 ;
@end

