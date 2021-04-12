/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@interface TopoProgressBar : CALayer {

	id _owningView;
	float _progressValue;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) float progressValue;              //@synthesize progressValue=_progressValue - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
-(void)dealloc;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(id)initWithOwningView:(id)arg1 ;
-(void)layoutSublayers;
-(CGSize)preferredFrameSize;
-(float)progressValue;
-(void)setProgressValue:(float)arg1 ;
-(CGImageRef)composeProgressBar;
@end

