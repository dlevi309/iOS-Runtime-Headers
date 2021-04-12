/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <QuartzCore/CATransformLayer.h>

@class CALayer;

@interface _ExplorerDotLayer : CATransformLayer {

	CALayer* _noServicePillLayer;
	CALayer* _connectivityDotBackingLayer;
	CALayer* _connectivityDotLayer;

}

@property (nonatomic,readonly) CALayer * noServicePillLayer;                       //@synthesize noServicePillLayer=_noServicePillLayer - In the implementation block
@property (nonatomic,readonly) CALayer * connectivityDotBackingLayer;              //@synthesize connectivityDotBackingLayer=_connectivityDotBackingLayer - In the implementation block
@property (nonatomic,readonly) CALayer * connectivityDotLayer;                     //@synthesize connectivityDotLayer=_connectivityDotLayer - In the implementation block
-(id)init;
-(void)layoutSublayers;
-(CALayer *)noServicePillLayer;
-(CALayer *)connectivityDotBackingLayer;
-(CALayer *)connectivityDotLayer;
@end

