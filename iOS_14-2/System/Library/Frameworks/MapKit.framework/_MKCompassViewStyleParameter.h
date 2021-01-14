/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)textColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)imageNamePart;
-(void)setImageNamePart:(NSString *)arg1 ;
@end

