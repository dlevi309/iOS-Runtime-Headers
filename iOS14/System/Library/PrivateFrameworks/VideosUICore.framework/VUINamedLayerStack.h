/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@protocol UINamedLayerStack;
@class NSString, NSArray, UIImage;

@interface VUINamedLayerStack : NSObject <UINamedLayerStack> {

	id<UINamedLayerStack> _layerStack;
	UIImage* _cornerRadiusFlatImage;
	UIImage* _originalImage;
	NSArray* _replacementLayers;

}

@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                  //@synthesize layerStack=_layerStack - In the implementation block
@property (nonatomic,retain) UIImage * cornerRadiusFlatImage;                   //@synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy) NSArray * replacementLayers;                         //@synthesize replacementLayers=_replacementLayers - In the implementation block
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
+(id)namedLayerStackWithImage:(id)arg1 ;
+(id)decodedNamedLayerStackWithImage:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 ;
-(BOOL)flatImageContainsCornerRadius;
-(id)init;
-(UIImage *)originalImage;
-(NSArray *)layers;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(id<UINamedLayerStack>)layerStack;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(CGSize)size;
-(double)scale;
-(NSString *)name;
-(id)_init;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(CGImageRef)flattenedImage;
-(void)setCornerRadiusFlatImage:(UIImage *)arg1 ;
-(void)setReplacementLayers:(NSArray *)arg1 ;
-(NSArray *)replacementLayers;
-(UIImage *)cornerRadiusFlatImage;
@end

