/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray, NSData;

@interface FCCKFeedResponse : NSObject {

	BOOL _reachedEnd;
	BOOL _reachedOrderLimit;
	BOOL _wasDropped;
	NSString* _feedID;
	NSArray* _feedItemAndArticleRecords;
	unsigned long long _extent;
	NSData* _cursor;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItemAndArticleRecords;              //@synthesize feedItemAndArticleRecords=_feedItemAndArticleRecords - In the implementation block
@property (assign,nonatomic) BOOL reachedEnd;                                //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (assign,nonatomic) BOOL reachedOrderLimit;                         //@synthesize reachedOrderLimit=_reachedOrderLimit - In the implementation block
@property (assign,nonatomic) unsigned long long extent;                      //@synthesize extent=_extent - In the implementation block
@property (nonatomic,copy) NSData * cursor;                                  //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) BOOL wasDropped;                                //@synthesize wasDropped=_wasDropped - In the implementation block
-(BOOL)reachedEnd;
-(void)setFeedID:(NSString *)arg1 ;
-(unsigned long long)extent;
-(NSArray *)feedItemAndArticleRecords;
-(void)setReachedOrderLimit:(BOOL)arg1 ;
-(BOOL)reachedOrderLimit;
-(void)setReachedEnd:(BOOL)arg1 ;
-(void)setFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(id)description;
-(void)setExtent:(unsigned long long)arg1 ;
-(NSData *)cursor;
-(NSString *)feedID;
-(void)setWasDropped:(BOOL)arg1 ;
-(BOOL)wasDropped;
-(void)setCursor:(NSData *)arg1 ;
@end

