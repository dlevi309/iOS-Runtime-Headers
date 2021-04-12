/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSArray;

@interface AVPlaybackControlsVisibilityControllerItemInfo : NSObject {

	BOOL _initiallyHidden;
	NSArray* _controls;
	long long _visibilityBehaviorOptions;

}

@property (nonatomic,retain) NSArray * controls;                                         //@synthesize controls=_controls - In the implementation block
@property (assign,nonatomic) long long visibilityBehaviorOptions;                        //@synthesize visibilityBehaviorOptions=_visibilityBehaviorOptions - In the implementation block
@property (assign,getter=isInitiallyHidden,nonatomic) BOOL initiallyHidden;              //@synthesize initiallyHidden=_initiallyHidden - In the implementation block
-(NSArray *)controls;
-(void)setControls:(NSArray *)arg1 ;
-(long long)visibilityBehaviorOptions;
-(void)setVisibilityBehaviorOptions:(long long)arg1 ;
-(BOOL)isInitiallyHidden;
-(void)setInitiallyHidden:(BOOL)arg1 ;
@end

