/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer;

@interface FigVideoContainerLayer : FigBaseCALayer {

	CALayer* _videoLayer;
	BOOL _shouldResizeVideoLayer;
	BOOL _isForScrubbingOnly;

}

@property (nonatomic,retain) CALayer * videoLayer;                                         //@synthesize videoLayer=_videoLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeVideoLayer;                                  //@synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer - In the implementation block
@property (assign,getter=isForScrubbingOnly,nonatomic) BOOL forScrubbingOnly;              //@synthesize isForScrubbingOnly=_isForScrubbingOnly - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CALayer *)videoLayer;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
-(BOOL)isForScrubbingOnly;
-(BOOL)shouldResizeVideoLayer;
-(void)setShouldResizeVideoLayer:(BOOL)arg1 ;
-(void)setForScrubbingOnly:(BOOL)arg1 ;
@end

