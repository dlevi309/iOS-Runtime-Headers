/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSublayers;
-(void)setOwningView:(id)arg1 ;
-(id)initWithOwningView:(id)arg1 ;
-(id)owningView;
-(float)progressValue;
-(void)setProgressValue:(float)arg1 ;
-(CGSize)preferredFrameSize;
-(void)dealloc;
-(CGImageRef)composeProgressBar;
@end

