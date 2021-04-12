/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)stopQuery;
-(NSArray *)results;
-(NSString *)sessionIdentifier;
-(id)initWithAssetType:(id)arg1 ;
-(void)setQueriesLocalAssetInformationOnly:(BOOL)arg1 ;
-(id)runQueryAndReturnError:(id*)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSString *)assetType;
-(id)initWithAssetType:(id)arg1 sessionIdentifier:(id)arg2 ;
-(id)runQueryForInfoReturnError:(id*)arg1 ;
-(void)startQuery:(/*^block*/id)arg1 ;
-(BOOL)queriesLocalAssetInformationOnly;
-(double)networkTimeout;
-(void)setNetworkTimeout:(double)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
@end

