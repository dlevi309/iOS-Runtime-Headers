/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@class NSString, NSArray, _UIStackedImageSingleNamedLayerImage;

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack> {

	_UIStackedImageSingleNamedLayerImage* _layerImage;

}

@property (nonatomic,retain) _UIStackedImageSingleNamedLayerImage * layerImage;              //@synthesize layerImage=_layerImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
-(NSString *)name;
-(CGSize)size;
-(double)scale;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(_UIStackedImageSingleNamedLayerImage *)layerImage;
-(void)setLayerImage:(_UIStackedImageSingleNamedLayerImage *)arg1 ;
@end

