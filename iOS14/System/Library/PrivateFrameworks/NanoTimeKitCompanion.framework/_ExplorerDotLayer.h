/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSublayers;
-(id)init;
-(CALayer *)noServicePillLayer;
-(CALayer *)connectivityDotLayer;
-(CALayer *)connectivityDotBackingLayer;
@end

