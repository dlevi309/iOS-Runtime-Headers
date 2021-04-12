/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXSearchActiveSearch;

@interface PXSearchAnalyticsSession : NSObject {

	BOOL _isValid;
	BOOL _userInteractedWithCurrentSearch;
	BOOL _successful;
	unsigned long long _beginType;
	double _startTime;
	double _timeIntervalSuccess;
	double _timeIntervalFirstAssetAction;
	double _timeIntervalFirstOneUpInTopAssets;
	double _timeIntervalFirstEnteredCollection;
	unsigned long long _numberOfSearches;
	unsigned long long _numberOfSearchesUntilFirstSuccess;
	unsigned long long _numberOfSearchesUntilFirstAssetAction;
	unsigned long long _numberOfSearchesUntilFirstOneUpInTopAssets;
	unsigned long long _numberOfSearchesUntilFirstEnteredCollection;
	unsigned long long _firstAssetActionType;
	unsigned long long _firstAssetActionResultType;
	unsigned long long _firstEnteredCollectionResultType;
	PXSearchActiveSearch* _lastSearch;

}

@property (assign,nonatomic) unsigned long long beginType;                                                //@synthesize beginType=_beginType - In the implementation block
@property (assign,nonatomic) double startTime;                                                            //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeIntervalSuccess;                                                  //@synthesize timeIntervalSuccess=_timeIntervalSuccess - In the implementation block
@property (assign,nonatomic) double timeIntervalFirstAssetAction;                                         //@synthesize timeIntervalFirstAssetAction=_timeIntervalFirstAssetAction - In the implementation block
@property (assign,nonatomic) double timeIntervalFirstOneUpInTopAssets;                                    //@synthesize timeIntervalFirstOneUpInTopAssets=_timeIntervalFirstOneUpInTopAssets - In the implementation block
@property (assign,nonatomic) double timeIntervalFirstEnteredCollection;                                   //@synthesize timeIntervalFirstEnteredCollection=_timeIntervalFirstEnteredCollection - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearches;                                         //@synthesize numberOfSearches=_numberOfSearches - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchesUntilFirstSuccess;                        //@synthesize numberOfSearchesUntilFirstSuccess=_numberOfSearchesUntilFirstSuccess - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchesUntilFirstAssetAction;                    //@synthesize numberOfSearchesUntilFirstAssetAction=_numberOfSearchesUntilFirstAssetAction - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchesUntilFirstOneUpInTopAssets;               //@synthesize numberOfSearchesUntilFirstOneUpInTopAssets=_numberOfSearchesUntilFirstOneUpInTopAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchesUntilFirstEnteredCollection;              //@synthesize numberOfSearchesUntilFirstEnteredCollection=_numberOfSearchesUntilFirstEnteredCollection - In the implementation block
@property (assign,nonatomic) unsigned long long firstAssetActionType;                                     //@synthesize firstAssetActionType=_firstAssetActionType - In the implementation block
@property (assign,nonatomic) unsigned long long firstAssetActionResultType;                               //@synthesize firstAssetActionResultType=_firstAssetActionResultType - In the implementation block
@property (assign,nonatomic) unsigned long long firstEnteredCollectionResultType;                         //@synthesize firstEnteredCollectionResultType=_firstEnteredCollectionResultType - In the implementation block
@property (nonatomic,retain) PXSearchActiveSearch * lastSearch;                                           //@synthesize lastSearch=_lastSearch - In the implementation block
@property (assign,nonatomic) BOOL successful;                                                             //@synthesize successful=_successful - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                                                //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) BOOL userInteractedWithCurrentSearch;                                        //@synthesize userInteractedWithCurrentSearch=_userInteractedWithCurrentSearch - In the implementation block
+(id)bucketedTimeInterval:(double)arg1 ;
+(id)cappedSearchCount:(unsigned long long)arg1 ;
+(id)_stringForResultType:(unsigned long long)arg1 ;
+(id)_stringForSessionBeginType:(unsigned long long)arg1 ;
+(id)_stringForActionType:(unsigned long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)_logSuccess;
-(void)logAssetAction:(unsigned long long)arg1 inResult:(unsigned long long)arg2 ;
-(void)setBeginType:(unsigned long long)arg1 ;
-(double)timeIntervalSuccess;
-(void)setTimeIntervalSuccess:(double)arg1 ;
-(double)timeIntervalFirstAssetAction;
-(void)setTimeIntervalFirstAssetAction:(double)arg1 ;
-(double)timeIntervalFirstOneUpInTopAssets;
-(void)setTimeIntervalFirstOneUpInTopAssets:(double)arg1 ;
-(double)timeIntervalFirstEnteredCollection;
-(void)setTimeIntervalFirstEnteredCollection:(double)arg1 ;
-(unsigned long long)numberOfSearches;
-(void)setNumberOfSearches:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSearchesUntilFirstSuccess;
-(void)setNumberOfSearchesUntilFirstSuccess:(unsigned long long)arg1 ;
-(unsigned long long)firstAssetActionType;
-(PXSearchActiveSearch *)lastSearch;
-(unsigned long long)numberOfSearchesUntilFirstAssetAction;
-(void)setNumberOfSearchesUntilFirstAssetAction:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSearchesUntilFirstOneUpInTopAssets;
-(void)setNumberOfSearchesUntilFirstOneUpInTopAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSearchesUntilFirstEnteredCollection;
-(void)setNumberOfSearchesUntilFirstEnteredCollection:(unsigned long long)arg1 ;
-(void)setFirstAssetActionType:(unsigned long long)arg1 ;
-(unsigned long long)firstAssetActionResultType;
-(void)setFirstAssetActionResultType:(unsigned long long)arg1 ;
-(unsigned long long)firstEnteredCollectionResultType;
-(void)setFirstEnteredCollectionResultType:(unsigned long long)arg1 ;
-(void)setLastSearch:(PXSearchActiveSearch *)arg1 ;
-(BOOL)successful;
-(void)setSuccessful:(BOOL)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(void)logSearch:(id)arg1 ;
-(void)endAndInvalidateSession;
-(BOOL)userInteractedWithCurrentSearch;
-(void)logEnteredCollectionResult:(unsigned long long)arg1 ;
-(void)logOneUpInTopAssets;
-(void)setUserInteractedWithCurrentSearch:(BOOL)arg1 ;
-(id)initWithBeginType:(unsigned long long)arg1 ;
-(unsigned long long)beginType;
-(double)startTime;
@end

