/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@class NSMutableDictionary, NSString;

@interface HMDAWDLogEventObserver : HMFObject <HMDLogEventObserver> {

	BOOL _uploadMaximumDelayReached;
	BOOL _hasDecryptionFailed;
	BOOL _lastDecryptionFailed;
	unsigned _pushCount;
	unsigned _fetchCount;
	unsigned _uploadCount;
	unsigned _uploadErrorCount;
	unsigned _homeManagerFetchCount;
	unsigned _homeZoneFetchCount;
	unsigned _homeManagerUploadCount;
	unsigned _homeZoneUploadCount;
	unsigned long long _dataSyncState;
	NSMutableDictionary* _reasonToCountMap;
	NSMutableDictionary* _errorToCountMap;

}

@property (assign,nonatomic) unsigned pushCount;                                  //@synthesize pushCount=_pushCount - In the implementation block
@property (assign,nonatomic) unsigned fetchCount;                                 //@synthesize fetchCount=_fetchCount - In the implementation block
@property (assign,nonatomic) unsigned uploadCount;                                //@synthesize uploadCount=_uploadCount - In the implementation block
@property (assign,nonatomic) BOOL uploadMaximumDelayReached;                      //@synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached - In the implementation block
@property (assign,nonatomic) unsigned uploadErrorCount;                           //@synthesize uploadErrorCount=_uploadErrorCount - In the implementation block
@property (assign,nonatomic) BOOL hasDecryptionFailed;                            //@synthesize hasDecryptionFailed=_hasDecryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL lastDecryptionFailed;                           //@synthesize lastDecryptionFailed=_lastDecryptionFailed - In the implementation block
@property (assign,nonatomic) unsigned long long dataSyncState;                    //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (assign,nonatomic) unsigned homeManagerFetchCount;                      //@synthesize homeManagerFetchCount=_homeManagerFetchCount - In the implementation block
@property (assign,nonatomic) unsigned homeZoneFetchCount;                         //@synthesize homeZoneFetchCount=_homeZoneFetchCount - In the implementation block
@property (assign,nonatomic) unsigned homeManagerUploadCount;                     //@synthesize homeManagerUploadCount=_homeManagerUploadCount - In the implementation block
@property (assign,nonatomic) unsigned homeZoneUploadCount;                        //@synthesize homeZoneUploadCount=_homeZoneUploadCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reasonToCountMap;              //@synthesize reasonToCountMap=_reasonToCountMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorToCountMap;               //@synthesize errorToCountMap=_errorToCountMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedAWDServerConnection;
+(void)_submitAWDMetric:(id)arg1 type:(unsigned)arg2 ;
+(id)stringForMetricType:(unsigned)arg1 ;
-(id)init;
-(unsigned long long)dataSyncState;
-(void)setPushCount:(unsigned)arg1 ;
-(unsigned)pushCount;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(unsigned)fetchCount;
-(void)setFetchCount:(unsigned)arg1 ;
-(void)setUploadCount:(unsigned)arg1 ;
-(void)setUploadErrorCount:(unsigned)arg1 ;
-(void)setUploadMaximumDelayReached:(BOOL)arg1 ;
-(void)setHasDecryptionFailed:(BOOL)arg1 ;
-(void)setLastDecryptionFailed:(BOOL)arg1 ;
-(void)setHomeManagerFetchCount:(unsigned)arg1 ;
-(void)setHomeZoneFetchCount:(unsigned)arg1 ;
-(void)setHomeManagerUploadCount:(unsigned)arg1 ;
-(void)setHomeZoneUploadCount:(unsigned)arg1 ;
-(unsigned)uploadCount;
-(unsigned)uploadErrorCount;
-(BOOL)uploadMaximumDelayReached;
-(BOOL)hasDecryptionFailed;
-(BOOL)lastDecryptionFailed;
-(unsigned)homeManagerFetchCount;
-(unsigned)homeZoneFetchCount;
-(unsigned)homeManagerUploadCount;
-(unsigned)homeZoneUploadCount;
-(void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)submitCloudSyncMetric;
-(void)clearCloudSyncMetrics;
-(void)setReasonToCountMap:(NSMutableDictionary *)arg1 ;
-(void)setErrorToCountMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)reasonToCountMap;
-(id)getTop:(long long)arg1 dictionary:(id)arg2 ;
-(NSMutableDictionary *)errorToCountMap;
-(void)processCloudEvent:(id)arg1 ;
@end

