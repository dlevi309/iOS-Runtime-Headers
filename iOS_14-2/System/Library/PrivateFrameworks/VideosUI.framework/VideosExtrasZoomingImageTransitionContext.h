/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionContext : NSObject {

	BOOL _interactive;
	VideosExtrasBorderedImageView* _zoomingImageView;
	unsigned long long _itemIndex;
	unsigned long long _appearState;

}

@property (nonatomic,retain) VideosExtrasBorderedImageView * zoomingImageView;              //@synthesize zoomingImageView=_zoomingImageView - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                  //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long appearState;                                //@synthesize appearState=_appearState - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                         //@synthesize interactive=_interactive - In the implementation block
-(unsigned long long)itemIndex;
-(BOOL)isInteractive;
-(void)setInteractive:(BOOL)arg1 ;
-(VideosExtrasBorderedImageView *)zoomingImageView;
-(void)setZoomingImageView:(VideosExtrasBorderedImageView *)arg1 ;
-(void)setAppearState:(unsigned long long)arg1 ;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(unsigned long long)appearState;
-(id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(BOOL)arg4 ;
@end

