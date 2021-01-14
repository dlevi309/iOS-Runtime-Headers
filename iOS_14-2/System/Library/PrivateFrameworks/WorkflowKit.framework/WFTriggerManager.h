/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFDatabase;

@interface WFTriggerManager : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id)allConfiguredTriggers;
-(void)saveNewConfiguredTrigger:(id)arg1 workflow:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateConfiguredTrigger:(id)arg1 triggerID:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)configuredTriggerWithID:(id)arg1 ;
@end

