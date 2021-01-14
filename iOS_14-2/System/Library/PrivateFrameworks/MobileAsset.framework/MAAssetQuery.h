/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@class NSDate, NSMutableArray, NSString, NSArray, NSSet;

@interface MAAssetQuery : NSObject {

	BOOL _isPallasResult;
	BOOL _isDone;
	BOOL _doNotBlockBeforeFirstUnlock;
	BOOL _doNotBlockOnNetworkStatus;
	long long _resultCode;
	NSDate* _postedDate;
	NSMutableArray* _queryParams;
	NSString* _assetType;
	NSArray* _results;
	NSSet* _assetIds;
	long long _returnTypes;
	NSDate* _lastFetchDate;

}

@property (nonatomic,readonly) NSMutableArray * queryParams;                //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) BOOL doNotBlockBeforeFirstUnlock;              //@synthesize doNotBlockBeforeFirstUnlock=_doNotBlockBeforeFirstUnlock - In the implementation block
@property (assign,nonatomic) BOOL doNotBlockOnNetworkStatus;                //@synthesize doNotBlockOnNetworkStatus=_doNotBlockOnNetworkStatus - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) long long resultCode;                        //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                 //@synthesize isDone=_isDone - In the implementation block
@property (nonatomic,readonly) NSSet * assetIds;                            //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,readonly) long long returnTypes;                       //@synthesize returnTypes=_returnTypes - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchDate;                      //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) NSDate * postedDate;                         //@synthesize postedDate=_postedDate - In the implementation block
-(void)augmentResultsWithState:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 ;
-(NSString *)assetType;
-(NSArray *)results;
-(long long)addKeyValuePair:(id)arg1 with:(id)arg2 ;
-(BOOL)isCatalogFetchedFromLiveServer;
-(long long)resultCode;
-(NSMutableArray *)queryParams;
-(long long)returnTypes;
-(void)setDoNotBlockBeforeFirstUnlock:(BOOL)arg1 ;
-(BOOL)isCatalogFetchedWithinThePastFewDays:(int)arg1 ;
-(long long)addKeyValueNull:(id)arg1 ;
-(id)description;
-(BOOL)doNotBlockBeforeFirstUnlock;
-(BOOL)doNotBlockOnNetworkStatus;
-(NSDate *)lastFetchDate;
-(void)queryMetaDataWithError:(/*^block*/id)arg1 ;
-(void)getResultsFromMessage:(id)arg1 ;
-(void)returnTypes:(long long)arg1 ;
-(void)queryMetaData:(/*^block*/id)arg1 ;
-(BOOL)isDone;
-(long long)queryMetaDataSync;
-(NSSet *)assetIds;
-(void)setDoNotBlockOnNetworkStatus:(BOOL)arg1 ;
-(long long)addKeyValueArray:(id)arg1 with:(id)arg2 ;
-(NSDate *)postedDate;
-(void)dealloc;
-(long long)queryInstalledAssetIds;
@end

