/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)fromOrder;
-(FCFDBFeed *)fromFeed;
-(void)setToOrder:(unsigned long long)arg1 ;
-(void)setFromOrder:(unsigned long long)arg1 ;
-(void)setFromFeed:(FCFDBFeed *)arg1 ;
-(unsigned long long)toOrder;
@end

