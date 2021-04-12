/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	id<UIWebSelectedItemPrivate> _group;
	NSArray* _options;
	long long _offset;

}

@property (nonatomic,readonly) long long offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(NSArray *)options;
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(id<UIWebSelectedItemPrivate>)group;
-(long long)offset;
-(id)initWithGroup:(id)arg1 itemOffset:(long long)arg2 ;
@end

