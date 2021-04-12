/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer, NSString;

@interface FigVideoContainerLayer : FigBaseCALayer {

	CALayer* _videoLayer;
	NSString* _STSLabel;
	BOOL _shouldResizeVideoLayer;
	BOOL _isForScrubbingOnly;
	CALayer* _STSLayer;

}

@property (nonatomic,retain) CALayer * videoLayer; 
@property (assign,nonatomic) BOOL shouldResizeVideoLayer;                                  //@synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer - In the implementation block
@property (setter=TSLabel,nonatomic,retain) NSString * STSLabel;                           //@synthesize STSLabel=_STSLabel - In the implementation block
@property (assign,getter=isForScrubbingOnly,nonatomic) BOOL forScrubbingOnly;              //@synthesize isForScrubbingOnly=_isForScrubbingOnly - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(NSString *)STSLabel;
-(void)layoutSublayers;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg1 ;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(BOOL)isForScrubbingOnly;
-(void)setForScrubbingOnly:(BOOL)arg1 ;
-(void)setShouldResizeVideoLayer:(BOOL)arg1 ;
-(BOOL)shouldResizeVideoLayer;
-(CALayer *)videoLayer;
-(void)dealloc;
-(void)setSTSLabel:(NSString *)arg1 ;
@end

