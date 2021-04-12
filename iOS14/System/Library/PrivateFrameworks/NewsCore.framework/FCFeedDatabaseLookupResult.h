/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FCFeedRange *)feedRange;
-(unsigned long long)ckFromOrder;
-(id)insertionToken;
-(unsigned long long)ckToOrder;
-(void)setFeedItems:(NSArray *)arg1 ;
-(NSData *)ckFromCursor;
-(id)description;
-(void)setInsertionToken:(id)arg1 ;
-(void)setCkToOrder:(unsigned long long)arg1 ;
-(void)setExhaustedRange:(BOOL)arg1 ;
-(void)setCkFromCursor:(NSData *)arg1 ;
-(NSArray *)feedItems;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(BOOL)exhaustedRange;
-(void)setCkFromOrder:(unsigned long long)arg1 ;
-(BOOL)hasCKCursor;
@end

