/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@class NSString, NSArray, _UIStackedImageSingleNamedLayerImage;

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack> {

	_UIStackedImageSingleNamedLayerImage* _layerImage;

}

@property (nonatomic,retain) _UIStackedImageSingleNamedLayerImage * layerImage;              //@synthesize layerImage=_layerImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)layers;
-(CGSize)size;
-(void)setLayerImage:(_UIStackedImageSingleNamedLayerImage *)arg1 ;
-(double)scale;
-(NSString *)name;
-(_UIStackedImageSingleNamedLayerImage *)layerImage;
-(CGImageRef)flattenedImage;
@end

