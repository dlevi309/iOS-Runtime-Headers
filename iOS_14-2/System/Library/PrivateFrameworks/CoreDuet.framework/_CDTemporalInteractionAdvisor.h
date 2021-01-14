/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class _CDInteractionStore, NSObject, NSMutableDictionary;

@interface _CDTemporalInteractionAdvisor : NSObject {

	int _settingsNotifyToken;
	_CDInteractionStore* _store;
	NSObject*<OS_dispatch_queue> _dataQueue;
	NSMutableDictionary* _consumerToModelMap;

}

@property (retain) _CDInteractionStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                //@synthesize dataQueue=_dataQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * consumerToModelMap;              //@synthesize consumerToModelMap=_consumerToModelMap - In the implementation block
@property (assign) int settingsNotifyToken;                                         //@synthesize settingsNotifyToken=_settingsNotifyToken - In the implementation block
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)rankContacts:(id)arg1 usingSettings:(id)arg2 ;
-(void)updateConsumerModel;
-(NSMutableDictionary *)consumerToModelMap;
-(id)rankerForDate:(id)arg1 settings:(id)arg2 ;
-(int)settingsNotifyToken;
-(void)setConsumerToModelMap:(NSMutableDictionary *)arg1 ;
-(void)setSettingsNotifyToken:(int)arg1 ;
-(void)dealloc;
@end

