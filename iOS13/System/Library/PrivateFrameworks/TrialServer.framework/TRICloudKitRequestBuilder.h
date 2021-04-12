/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@class NSString, NSMutableArray, NSArray;

@interface TRICloudKitRequestBuilder : NSObject {

	NSString* _ckApiKey;
	unsigned _cacheControlMaxAge;
	NSString* _recordType;
	NSMutableArray* _filterBy;
	NSMutableArray* _sortBy;
	NSString* _zoneName;
	double _bundleFetchTimeout;
	unsigned long long _cachePolicy;
	NSArray* _fieldNames;
	NSString* _appleEdgeCacheValue;

}

@property (retain) NSString * appleEdgeCacheValue;                   //@synthesize appleEdgeCacheValue=_appleEdgeCacheValue - In the implementation block
@property (nonatomic,retain) NSString * recordType;                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterBy;              //@synthesize filterBy=_filterBy - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortBy;                //@synthesize sortBy=_sortBy - In the implementation block
@property (nonatomic,retain) NSString * zoneName;                    //@synthesize zoneName=_zoneName - In the implementation block
@property (assign) double bundleFetchTimeout;                        //@synthesize bundleFetchTimeout=_bundleFetchTimeout - In the implementation block
@property (assign) unsigned cacheControlMaxAge;                      //@synthesize cacheControlMaxAge=_cacheControlMaxAge - In the implementation block
@property (assign) unsigned long long cachePolicy;                   //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,retain) NSArray * fieldNames;                   //@synthesize fieldNames=_fieldNames - In the implementation block
+(id)requestForExperiment;
+(id)requestForTreatment;
+(id)requestWithRecordType:(id)arg1 ;
-(id)init;
-(id)query;
-(NSString *)recordType;
-(NSString *)zoneName;
-(id)request;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(id)body;
-(void)setRecordType:(NSString *)arg1 ;
-(NSMutableArray *)sortBy;
-(void)setSortBy:(NSMutableArray *)arg1 ;
-(NSArray *)fieldNames;
-(unsigned)cacheControlMaxAge;
-(id)baseUrl;
-(void)setCacheControlMaxAge:(unsigned)arg1 ;
-(void)sortByModifiedDate;
-(void)filterByModificationDateNewerThan:(id)arg1 ;
-(void)filterByFieldName:(id)arg1 comparator:(id)arg2 value:(id)arg3 type:(id)arg4 ;
-(void)filterByExperimentId:(id)arg1 ;
-(void)filterByTreatmentId:(id)arg1 ;
-(NSMutableArray *)filterBy;
-(void)setFilterBy:(NSMutableArray *)arg1 ;
-(void)filterByFieldName:(id)arg1 equalsStringValue:(id)arg2 ;
-(void)sortBy:(id)arg1 ascending:(BOOL)arg2 ;
-(void)setAppleEdgeCacheValue:(NSString *)arg1 ;
-(id)_cloudKitEnvironment;
-(id)_cloudKitApiToken;
-(double)bundleFetchTimeout;
-(NSString *)appleEdgeCacheValue;
-(id)cacheControlValue;
-(void)setBundleFetchTimeout:(double)arg1 ;
-(void)setFieldNames:(NSArray *)arg1 ;
@end

