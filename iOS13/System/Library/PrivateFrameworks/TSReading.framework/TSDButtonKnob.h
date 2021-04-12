/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDKnob.h>

@class TSUImage;

@interface TSDButtonKnob : TSDKnob {

	TSUImage* mImage;
	BOOL mEnabled;
	BOOL mHighlighted;

}

@property (nonatomic,retain) TSUImage * image; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(TSUImage *)image;
-(void)setImage:(TSUImage *)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)knobImage;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(double*)arg3 ;
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5 ;
-(id)initWithImage:(id)arg1 tag:(unsigned long long)arg2 onRep:(id)arg3 ;
-(void)p_updateLayerImage;
@end

