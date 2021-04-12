/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@class NSDate, NSMutableArray, NSString, NSArray, NSSet;

@interface MAAssetQuery : NSObject {

	BOOL _doNotBlockBeforeFirstUnlock;
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
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSSet * assetIds;                            //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,readonly) long long returnTypes;                       //@synthesize returnTypes=_returnTypes - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchDate;                      //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) NSDate * postedDate;                         //@synthesize postedDate=_postedDate - In the implementation block
-(void)dealloc;
-(NSArray *)results;
-(id)initWithType:(id)arg1 ;
-(long long)addKeyValuePair:(id)arg1 with:(id)arg2 ;
-(long long)queryMetaDataSync;
-(void)returnTypes:(long long)arg1 ;
-(void)setDoNotBlockBeforeFirstUnlock:(BOOL)arg1 ;
-(NSDate *)lastFetchDate;
-(NSString *)assetType;
-(NSMutableArray *)queryParams;
-(void)queryMetaData:(/*^block*/id)arg1 ;
-(long long)addKeyValueArray:(id)arg1 with:(id)arg2 ;
-(long long)returnTypes;
-(BOOL)doNotBlockBeforeFirstUnlock;
-(void)getResultsFromMessage:(id)arg1 ;
-(void)augmentResultsWithState:(BOOL)arg1 ;
-(long long)addKeyValueNull:(id)arg1 ;
-(long long)queryInstalledAssetIds;
-(NSDate *)postedDate;
-(NSSet *)assetIds;
@end

