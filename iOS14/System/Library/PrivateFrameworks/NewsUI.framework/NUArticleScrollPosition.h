/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class SXScrollPosition;

@interface NUArticleScrollPosition : NSObject {

	SXScrollPosition* _position;
	long long _source;

}

@property (nonatomic,readonly) SXScrollPosition * position;              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) long long source;                         //@synthesize source=_source - In the implementation block
-(SXScrollPosition *)position;
-(long long)source;
-(id)initWithPosition:(id)arg1 source:(long long)arg2 ;
@end

