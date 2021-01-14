/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(id<UIWebSelectedItemPrivate>)group;
-(NSArray *)options;
-(void)setOptions:(NSArray *)arg1 ;
-(long long)offset;
-(id)initWithGroup:(id)arg1 itemOffset:(long long)arg2 ;
-(void)dealloc;
@end

