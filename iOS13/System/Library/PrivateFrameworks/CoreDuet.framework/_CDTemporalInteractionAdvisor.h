/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithStore:(id)arg1 ;
-(_CDInteractionStore *)store;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(id)rankContacts:(id)arg1 usingSettings:(id)arg2 ;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateConsumerModel;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(NSMutableDictionary *)consumerToModelMap;
-(id)rankerForDate:(id)arg1 settings:(id)arg2 ;
-(void)setConsumerToModelMap:(NSMutableDictionary *)arg1 ;
-(int)settingsNotifyToken;
-(void)setSettingsNotifyToken:(int)arg1 ;
@end

