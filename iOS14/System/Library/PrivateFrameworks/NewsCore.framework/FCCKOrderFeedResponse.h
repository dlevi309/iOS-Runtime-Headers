/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray;

@interface FCCKOrderFeedResponse : NSObject {

	BOOL _reachedEnd;
	BOOL _reachedMinOrder;
	BOOL _wasDropped;
	NSString* _feedID;
	NSArray* _feedItemAndArticleRecords;
	unsigned long long _extent;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItemAndArticleRecords;              //@synthesize feedItemAndArticleRecords=_feedItemAndArticleRecords - In the implementation block
@property (assign,nonatomic) BOOL reachedEnd;                                //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (assign,nonatomic) BOOL reachedMinOrder;                           //@synthesize reachedMinOrder=_reachedMinOrder - In the implementation block
@property (assign,nonatomic) unsigned long long extent;                      //@synthesize extent=_extent - In the implementation block
@property (assign,nonatomic) BOOL wasDropped;                                //@synthesize wasDropped=_wasDropped - In the implementation block
-(BOOL)reachedEnd;
-(void)setFeedID:(NSString *)arg1 ;
-(unsigned long long)extent;
-(void)setReachedMinOrder:(BOOL)arg1 ;
-(NSArray *)feedItemAndArticleRecords;
-(void)setReachedEnd:(BOOL)arg1 ;
-(void)setFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(id)description;
-(void)setExtent:(unsigned long long)arg1 ;
-(NSString *)feedID;
-(BOOL)reachedMinOrder;
-(void)setWasDropped:(BOOL)arg1 ;
-(BOOL)wasDropped;
@end

