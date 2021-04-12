/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, UIColor;

@interface _MKCompassViewStyleParameter : NSObject {

	NSString* _imageNamePart;
	UIColor* _textColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy) NSString * imageNamePart;                 //@synthesize imageNamePart=_imageNamePart - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setImageNamePart:(NSString *)arg1 ;
-(NSString *)imageNamePart;
@end

