/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue, MPCPlabackEngineEventStreamTestingDelegate;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSString, NSMutableArray, NSHashTable, MSVSQLDatabase, NSObject, NSUUID, MPCPlaybackEngineEvent;

@interface MPCPlaybackEngineEventStream : NSObject {

	unsigned long long _maximumEventDeliveryTimestamp;
	NSString* _playerID;
	NSMutableArray* _subscriptions;
	NSHashTable* _deferralAssertions;
	MSVSQLDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _lastReceivedEventIdentifier;
	id<MPCPlabackEngineEventStreamTestingDelegate> _testingDelegate;

}

@property (assign,nonatomic,__weak) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate;              //@synthesize testingDelegate=_testingDelegate - In the implementation block
@property (nonatomic,readonly) MPCPlaybackEngineEvent * lastEvent; 
@property (assign,nonatomic) unsigned long long maximumEventDeliveryTimestamp; 
@property (nonatomic,copy,readonly) NSString * playerID;                                                         //@synthesize playerID=_playerID - In the implementation block
-(MPCPlaybackEngineEvent *)lastEvent;
-(NSString *)playerID;
-(id)initWithPlayerID:(id)arg1 ;
-(id)debugDescription;
-(void)emitEventType:(id)arg1 payload:(id)arg2 atTime:(SCD_Struct_MP9)arg3 ;
-(void)emitEventType:(id)arg1 payload:(id)arg2 ;
-(id)initWithPlayerID:(id)arg1 database:(id)arg2 ;
-(id<MPCPlabackEngineEventStreamTestingDelegate>)testingDelegate;
-(id)lastEventsWithCount:(long long)arg1 ;
-(void)addConsumer:(id)arg1 ;
-(void)removeConsumer:(id)arg1 ;
-(id)eventDeliveryDeferralAssertionForReason:(id)arg1 ;
-(unsigned long long)maximumEventDeliveryTimestamp;
-(void)setMaximumEventDeliveryTimestamp:(unsigned long long)arg1 ;
-(void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)arg1 ;
-(void)setTestingDelegate:(id<MPCPlabackEngineEventStreamTestingDelegate>)arg1 ;
@end

