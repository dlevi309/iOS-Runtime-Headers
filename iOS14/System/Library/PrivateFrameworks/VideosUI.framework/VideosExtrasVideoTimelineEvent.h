/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class IKLockupElement, UIImage, NSString;

@interface VideosExtrasVideoTimelineEvent : NSObject {

	IKLockupElement* _lockup;
	UIImage* _image;
	BOOL _isFirstEvent;
	double _offset;
	double _duration;
	VideosExtrasVideoTimelineEvent* _previous;
	VideosExtrasVideoTimelineEvent* _next;

}

@property (assign,nonatomic,__weak) VideosExtrasVideoTimelineEvent * next;                    //@synthesize next=_next - In the implementation block
@property (assign,nonatomic) BOOL isFirstEvent;                                               //@synthesize isFirstEvent=_isFirstEvent - In the implementation block
@property (nonatomic,readonly) double offset;                                                 //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subHeader; 
@property (nonatomic,__weak,readonly) VideosExtrasVideoTimelineEvent * previous;              //@synthesize previous=_previous - In the implementation block
-(VideosExtrasVideoTimelineEvent *)next;
-(VideosExtrasVideoTimelineEvent *)previous;
-(double)offset;
-(id)description;
-(void)setNext:(VideosExtrasVideoTimelineEvent *)arg1 ;
-(double)duration;
-(NSString *)title;
-(id)initWithElement:(id)arg1 prev:(id)arg2 ;
-(NSString *)subHeader;
-(void)loadImage:(/*^block*/id)arg1 ;
-(BOOL)isFirstEvent;
-(void)setIsFirstEvent:(BOOL)arg1 ;
@end

