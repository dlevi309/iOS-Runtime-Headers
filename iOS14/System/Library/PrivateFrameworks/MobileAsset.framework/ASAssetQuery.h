/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@class NSPredicate, NSString, NSArray;

@interface ASAssetQuery : NSObject {

	BOOL _queriesLocalAssetInformationOnly;
	NSPredicate* _predicate;
	double _networkTimeout;
	NSString* _assetType;
	NSString* _sessionIdentifier;
	NSArray* _results;

}

@property (nonatomic,copy) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) BOOL queriesLocalAssetInformationOnly;              //@synthesize queriesLocalAssetInformationOnly=_queriesLocalAssetInformationOnly - In the implementation block
@property (assign,nonatomic) double networkTimeout;                              //@synthesize networkTimeout=_networkTimeout - In the implementation block
+(id)queryPredicateForProperties:(id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSString *)assetType;
-(NSArray *)results;
-(NSPredicate *)predicate;
-(double)networkTimeout;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(void)stopQuery;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(id)initWithAssetType:(id)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setNetworkTimeout:(double)arg1 ;
-(id)initWithAssetType:(id)arg1 sessionIdentifier:(id)arg2 ;
-(id)runQueryForInfoReturnError:(id*)arg1 ;
-(BOOL)queriesLocalAssetInformationOnly;
-(id)runQueryAndReturnError:(id*)arg1 ;
-(void)dealloc;
-(void)setQueriesLocalAssetInformationOnly:(BOOL)arg1 ;
-(void)startQuery:(/*^block*/id)arg1 ;
@end

