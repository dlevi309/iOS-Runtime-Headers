/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, UIFont;

@interface _MKCompassViewSizeParameter : NSObject {

	NSString* _imageNamePart;
	double _diameter;
	UIFont* _font;
	double _textOffsetFromCenter;

}

@property (nonatomic,copy) NSString * imageNamePart;                   //@synthesize imageNamePart=_imageNamePart - In the implementation block
@property (assign,nonatomic) double diameter;                          //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double textOffsetFromCenter;              //@synthesize textOffsetFromCenter=_textOffsetFromCenter - In the implementation block
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(double)textOffsetFromCenter;
-(void)setImageNamePart:(NSString *)arg1 ;
-(void)setTextOffsetFromCenter:(double)arg1 ;
-(NSString *)imageNamePart;
@end

