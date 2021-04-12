/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(VideosExtrasVideoTimelineEvent *)next;
-(VideosExtrasVideoTimelineEvent *)previous;
-(NSString *)title;
-(double)duration;
-(double)offset;
-(void)setNext:(VideosExtrasVideoTimelineEvent *)arg1 ;
-(NSString *)subHeader;
-(void)loadImage:(/*^block*/id)arg1 ;
-(id)initWithElement:(id)arg1 prev:(id)arg2 ;
-(BOOL)isFirstEvent;
-(void)setIsFirstEvent:(BOOL)arg1 ;
@end

