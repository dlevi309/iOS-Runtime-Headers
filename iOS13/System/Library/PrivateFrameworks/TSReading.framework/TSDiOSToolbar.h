/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIToolbar.h>

@class UIImage;

@interface TSDiOSToolbar : UIToolbar {

	UIImage* mBackgroundImage;
	BOOL mDrawsBackground;
	double mShadowOpacity;
	CGSize mShadowOffset;
	double mShadowRadius;
	double mShadowX;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) BOOL drawsBackground; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (assign,nonatomic) double shadowX; 
-(void)dealloc;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)layoutSubviews;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)shadowOpacity;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)drawsBackground;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)p_updateLayerFlags;
-(void)setupShadowPath;
-(void)setShadowX:(double)arg1 ;
-(double)shadowX;
@end

