/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCFDBFeed;

@interface FCFeedInsertionToken : NSObject {

	FCFDBFeed* _fromFeed;
	unsigned long long _fromOrder;
	unsigned long long _toOrder;

}

@property (nonatomic,retain) FCFDBFeed * fromFeed;                      //@synthesize fromFeed=_fromFeed - In the implementation block
@property (assign,nonatomic) unsigned long long fromOrder;              //@synthesize fromOrder=_fromOrder - In the implementation block
@property (assign,nonatomic) unsigned long long toOrder;                //@synthesize toOrder=_toOrder - In the implementation block
-(FCFDBFeed *)fromFeed;
-(unsigned long long)fromOrder;
-(unsigned long long)toOrder;
-(void)setFromFeed:(FCFDBFeed *)arg1 ;
-(void)setFromOrder:(unsigned long long)arg1 ;
-(void)setToOrder:(unsigned long long)arg1 ;
@end

