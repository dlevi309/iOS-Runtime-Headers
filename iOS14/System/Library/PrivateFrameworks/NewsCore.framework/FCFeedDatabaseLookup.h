/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedDatabaseLookup : NSObject {

	BOOL _cachedOnly;
	NSString* _feedID;
	FCFeedRange* _feedRange;
	unsigned long long _maxCount;
	FCFeedItemFeature* _requiredFeature;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) FCFeedRange * feedRange;                          //@synthesize feedRange=_feedRange - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                    //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) FCFeedItemFeature * requiredFeature;              //@synthesize requiredFeature=_requiredFeature - In the implementation block
-(FCFeedRange *)feedRange;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setCachedOnly:(BOOL)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(BOOL)cachedOnly;
-(FCFeedItemFeature *)requiredFeature;
-(void)setRequiredFeature:(FCFeedItemFeature *)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(NSString *)feedID;
@end

