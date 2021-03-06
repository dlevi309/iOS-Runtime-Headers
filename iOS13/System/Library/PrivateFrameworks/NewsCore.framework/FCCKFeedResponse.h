/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSData *)cursor;
-(unsigned long long)extent;
-(void)setExtent:(unsigned long long)arg1 ;
-(void)setCursor:(NSData *)arg1 ;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setWasDropped:(BOOL)arg1 ;
-(BOOL)wasDropped;
-(void)setFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(void)setReachedOrderLimit:(BOOL)arg1 ;
-(NSArray *)feedItemAndArticleRecords;
-(BOOL)reachedOrderLimit;
@end

