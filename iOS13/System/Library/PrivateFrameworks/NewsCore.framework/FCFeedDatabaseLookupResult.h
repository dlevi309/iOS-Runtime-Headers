/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, FCFeedRange, NSData;

@interface FCFeedDatabaseLookupResult : NSObject {

	BOOL _exhaustedRange;
	NSArray* _feedItems;
	FCFeedRange* _feedRange;
	NSData* _ckFromCursor;
	unsigned long long _ckFromOrder;
	unsigned long long _ckToOrder;
	id _insertionToken;

}

@property (nonatomic,readonly) BOOL hasCKCursor; 
@property (nonatomic,copy) NSArray * feedItems;                           //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,copy) FCFeedRange * feedRange;                       //@synthesize feedRange=_feedRange - In the implementation block
@property (assign,nonatomic) BOOL exhaustedRange;                         //@synthesize exhaustedRange=_exhaustedRange - In the implementation block
@property (nonatomic,copy) NSData * ckFromCursor;                         //@synthesize ckFromCursor=_ckFromCursor - In the implementation block
@property (assign,nonatomic) unsigned long long ckFromOrder;              //@synthesize ckFromOrder=_ckFromOrder - In the implementation block
@property (assign,nonatomic) unsigned long long ckToOrder;                //@synthesize ckToOrder=_ckToOrder - In the implementation block
@property (nonatomic,retain) id insertionToken;                           //@synthesize insertionToken=_insertionToken - In the implementation block
-(id)description;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(FCFeedRange *)feedRange;
-(NSArray *)feedItems;
-(BOOL)hasCKCursor;
-(void)setExhaustedRange:(BOOL)arg1 ;
-(void)setCkFromCursor:(NSData *)arg1 ;
-(void)setCkFromOrder:(unsigned long long)arg1 ;
-(void)setCkToOrder:(unsigned long long)arg1 ;
-(unsigned long long)ckToOrder;
-(void)setInsertionToken:(id)arg1 ;
-(NSData *)ckFromCursor;
-(unsigned long long)ckFromOrder;
-(BOOL)exhaustedRange;
-(id)insertionToken;
@end

