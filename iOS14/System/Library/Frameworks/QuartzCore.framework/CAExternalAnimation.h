/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CAExternalAnimation : CAPropertyAnimation {

	/*^block*/id _presentationBlock;

}

@property (readonly) unsigned long long animId; 
@property (copy) id presentationBlock;                       //@synthesize presentationBlock=_presentationBlock - In the implementation block
+(id)animationWithKeyPath:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned long long)animId;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setPresentationBlock:(id)arg1 ;
-(id)presentationBlock;
-(void)setAnimId:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

