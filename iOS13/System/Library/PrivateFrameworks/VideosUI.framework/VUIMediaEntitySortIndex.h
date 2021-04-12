/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString;

@interface VUIMediaEntitySortIndex : NSObject {

	NSString* _title;
	unsigned long long _startIndex;
	unsigned long long _count;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)startIndex;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
@end

