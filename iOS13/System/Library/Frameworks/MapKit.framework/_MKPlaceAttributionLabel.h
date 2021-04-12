/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)imagePlaceholder;
-(double)textBaselineOffset;
-(double)imageBaselineOffset;
-(id)attributionWithString:(id)arg1 ;
-(void)setTextBaselineOffset:(double)arg1 ;
-(void)setImageBaselineOffset:(double)arg1 ;
-(void)setImagePlaceholder:(NSString *)arg1 ;
@end

