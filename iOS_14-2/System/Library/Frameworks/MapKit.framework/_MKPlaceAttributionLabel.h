/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class UIImage, NSString;

@interface _MKPlaceAttributionLabel : NSObject {

	UIImage* image;
	double textBaselineOffset;
	double imageBaselineOffset;
	NSString* imagePlaceholder;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double textBaselineOffset; 
@property (assign,nonatomic) double imageBaselineOffset; 
@property (nonatomic,retain) NSString * imagePlaceholder; 
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)imagePlaceholder;
-(double)textBaselineOffset;
-(double)imageBaselineOffset;
-(id)attributionWithString:(id)arg1 ;
-(void)setTextBaselineOffset:(double)arg1 ;
-(void)setImageBaselineOffset:(double)arg1 ;
-(void)setImagePlaceholder:(NSString *)arg1 ;
-(UIImage *)image;
@end

