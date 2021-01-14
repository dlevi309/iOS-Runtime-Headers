/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)startIndex;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)description;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
@end

