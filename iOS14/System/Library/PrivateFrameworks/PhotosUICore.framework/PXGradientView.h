/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CAGradientLayer;

@interface PXGradientView : UIView {

	NSArray* _colors;

}

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,copy) NSArray * colors;                                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(NSArray *)locations;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setLocations:(NSArray *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
@end

