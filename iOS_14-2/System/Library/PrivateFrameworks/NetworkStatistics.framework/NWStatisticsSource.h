/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/


@protocol NWStatisticsSourceDelegate;
#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NWStatisticsManager;

@interface NWStatisticsSource : NSObject {

	unsigned _filter;
	nstat_counts _last_counts;
	BOOL _removing;
	unsigned _provider;
	id<NWStatisticsSourceDelegate> _delegate;
	NWStatisticsManager* _manager;
	unsigned long long _reference;
	unsigned long long _countsSeqno;
	unsigned long long _descriptorSeqno;

}

@property (retain) id<NWStatisticsSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NWStatisticsManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (assign) unsigned long long reference;                         //@synthesize reference=_reference - In the implementation block
@property (assign) BOOL removing;                                        //@synthesize removing=_removing - In the implementation block
@property (assign) unsigned long long countsSeqno;                       //@synthesize countsSeqno=_countsSeqno - In the implementation block
@property (assign) unsigned long long descriptorSeqno;                   //@synthesize descriptorSeqno=_descriptorSeqno - In the implementation block
@property (readonly) unsigned provider;                                  //@synthesize provider=_provider - In the implementation block
@property (readonly) const nstat_counts* _nstat_counts; 
@property (readonly) unsigned long long sourceIdentifier; 
@property (readonly) unsigned long long snapshotRevision; 
+(id)createSourceForProvider:(unsigned)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3 ;
-(void)queryCounts;
-(id)_currentSnapshot;
-(id)currentSnapshot;
-(void)setRemoving:(BOOL)arg1 ;
-(unsigned long long)reference;
-(id)init;
-(id<NWStatisticsSourceDelegate>)delegate;
-(unsigned)provider;
-(const nstat_counts*)_nstat_counts;
-(BOOL)_handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(void)queryUpdate;
-(void)setDelegate:(id<NWStatisticsSourceDelegate>)arg1 ;
-(unsigned long long)countsSeqno;
-(BOOL)handleCounts:(const nstat_counts*)arg1 ;
-(BOOL)removing;
-(BOOL)handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(NWStatisticsManager *)manager;
-(id)initWithManager:(id)arg1 source:(unsigned long long)arg2 provider:(unsigned)arg3 ;
-(void)setCountsSeqno:(unsigned long long)arg1 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(void)queryDescription;
-(unsigned long long)snapshotRevision;
-(unsigned long long)descriptorSeqno;
-(void)setReference:(unsigned long long)arg1 ;
-(void)setDescriptorSeqno:(unsigned long long)arg1 ;
-(unsigned long long)sourceIdentifier;
@end

