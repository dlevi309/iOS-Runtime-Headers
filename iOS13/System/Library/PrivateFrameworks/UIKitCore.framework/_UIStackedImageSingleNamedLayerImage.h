/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class UIImage, NSString;

@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage> {

	UIImage* _imageObj;

}

@property (nonatomic,retain) UIImage * imageObj;                                             //@synthesize imageObj=_imageObj - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
-(NSString *)name;
-(CGRect)frame;
-(double)opacity;
-(UIImage *)imageObj;
-(int)blendMode;
-(void)setImageObj:(UIImage *)arg1 ;
@end

