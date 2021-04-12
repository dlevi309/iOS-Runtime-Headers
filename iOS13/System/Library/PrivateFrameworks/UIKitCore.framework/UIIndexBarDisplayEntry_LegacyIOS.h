/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarDisplayEntry.h>

@class UIImage;

@interface UIIndexBarDisplayEntry_LegacyIOS : UIIndexBarDisplayEntry {

	UIImage* _image;
	id _line;
	CGPoint _baselinePoint;
	CGRect _bounds;
	CGRect _typeBounds;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) id line;                            //@synthesize line=_line - In the implementation block
@property (assign,nonatomic) CGRect bounds;                      //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGRect typeBounds;                  //@synthesize typeBounds=_typeBounds - In the implementation block
@property (assign,nonatomic) CGPoint baselinePoint;              //@synthesize baselinePoint=_baselinePoint - In the implementation block
-(id)description;
-(CGRect)bounds;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)typeBounds;
-(CGPoint)baselinePoint;
-(id)line;
-(void)setLine:(id)arg1 ;
-(void)setTypeBounds:(CGRect)arg1 ;
-(void)setBaselinePoint:(CGPoint)arg1 ;
@end

