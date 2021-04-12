/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class NSString, UIImage;

@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage> {

	int _blendMode;
	NSString* _name;
	double _opacity;
	UIImage* _imageObj;
	CGRect _frame;

}

@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                   //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;                                                 //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                                                  //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) UIImage * imageObj;                                             //@synthesize imageObj=_imageObj - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CGRect)frame;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIImage *)imageObj;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setImageObj:(UIImage *)arg1 ;
@end

