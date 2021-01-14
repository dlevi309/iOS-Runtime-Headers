/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIImageView, UIView;

@interface WFCircularGlyphView : UIView {

	double _imagePointSize;
	NSString* _glyphName;
	UIColor* _glyphColor;
	UIColor* _glyphBackgroundColor;
	UIImageView* _glyphImageView;
	UIView* _backgroundColorView;

}

@property (nonatomic,retain) NSString * glyphName;                        //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIColor * glyphBackgroundColor;              //@synthesize glyphBackgroundColor=_glyphBackgroundColor - In the implementation block
@property (nonatomic,retain) UIImageView * glyphImageView;                //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIView * backgroundColorView;                //@synthesize backgroundColorView=_backgroundColorView - In the implementation block
@property (assign,nonatomic) double imagePointSize;                       //@synthesize imagePointSize=_imagePointSize - In the implementation block
-(void)setGlyphColor:(UIColor *)arg1 ;
-(NSString *)glyphName;
-(UIColor *)glyphColor;
-(id)glyphImage;
-(void)setGlyphName:(NSString *)arg1 ;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(void)configureViews;
-(UIImageView *)glyphImageView;
-(UIColor *)glyphBackgroundColor;
-(void)setGlyphBackgroundColor:(UIColor *)arg1 ;
-(double)imagePointSize;
-(id)initWithName:(id)arg1 glyphColor:(id)arg2 backgroundColor:(id)arg3 ;
-(UIView *)backgroundColorView;
-(void)configureGlyphImageView;
-(void)configureBackgroundColorView;
-(void)setImagePointSize:(double)arg1 ;
-(void)setBackgroundColorView:(UIView *)arg1 ;
@end

