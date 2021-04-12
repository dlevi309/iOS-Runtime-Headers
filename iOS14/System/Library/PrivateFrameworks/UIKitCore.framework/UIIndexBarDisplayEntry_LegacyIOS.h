/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)bounds;
-(void)setImage:(UIImage *)arg1 ;
-(void)setLine:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(CGRect)typeBounds;
-(id)description;
-(CGPoint)baselinePoint;
-(void)setTypeBounds:(CGRect)arg1 ;
-(void)setBaselinePoint:(CGPoint)arg1 ;
-(id)line;
@end

