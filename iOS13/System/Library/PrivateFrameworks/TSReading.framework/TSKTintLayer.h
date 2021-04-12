/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer {

	CALayer* _contentsLayer;

}

@property (nonatomic,retain) CALayer * contentsLayer;              //@synthesize contentsLayer=_contentsLayer - In the implementation block
@property (assign) CGColorRef tintColor; 
-(void)dealloc;
-(id)contents;
-(void)setContents:(id)arg1 ;
-(CGColorRef)tintColor;
-(void)setTintColor:(CGColorRef)arg1 ;
-(void)setNeedsDisplay;
-(void)layoutSublayers;
-(void)setContentsLayer:(CALayer *)arg1 ;
-(CALayer *)contentsLayer;
@end

