/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/PKMicaResizableView.h>

@class CALayer, NSDictionary, NSString;

@interface PKMicaLayer : CALayer <PKMicaResizableView> {

	CALayer* _rootLayer;
	NSDictionary* _publishedColorLayers;
	NSDictionary* _publishedColorShapeLayers;

}

@property (nonatomic,readonly) CALayer * rootLayer;                                   //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,readonly) NSDictionary * publishedColorLayers;                   //@synthesize publishedColorLayers=_publishedColorLayers - In the implementation block
@property (nonatomic,readonly) NSDictionary * publishedColorShapeLayers;              //@synthesize publishedColorShapeLayers=_publishedColorShapeLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSublayers;
-(CALayer *)rootLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(double)pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(CGSize)boundsSizeToMatchPointScale:(double)arg1 ;
-(NSDictionary *)publishedColorLayers;
-(NSDictionary *)publishedColorShapeLayers;
-(void)dealloc;
@end

