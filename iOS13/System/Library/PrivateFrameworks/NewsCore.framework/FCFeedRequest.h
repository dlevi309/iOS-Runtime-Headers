/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedRequest : NSObject <NSCopying> {

	BOOL _cachedOnly;
	NSString* _feedID;
	long long _feedBin;
	FCFeedRange* _feedRange;
	unsigned long long _maxCount;
	FCFeedItemFeature* _requiredFeature;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) long long feedBin;                              //@synthesize feedBin=_feedBin - In the implementation block
@property (nonatomic,copy) FCFeedRange * feedRange;                          //@synthesize feedRange=_feedRange - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                    //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) FCFeedItemFeature * requiredFeature;              //@synthesize requiredFeature=_requiredFeature - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(NSString *)feedID;
-(BOOL)cachedOnly;
-(void)setCachedOnly:(BOOL)arg1 ;
-(void)setRequiredFeature:(FCFeedItemFeature *)arg1 ;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setFeedBin:(long long)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(long long)feedBin;
-(FCFeedRange *)feedRange;
-(FCFeedItemFeature *)requiredFeature;
@end

