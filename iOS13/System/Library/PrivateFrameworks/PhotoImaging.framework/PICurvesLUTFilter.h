/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSArray;

@interface PICurvesLUTFilter : CIFilter {

	NSArray* _inputPointsR;
	NSArray* _inputPointsG;
	NSArray* _inputPointsB;
	NSArray* _inputPointsL;

}

@property (retain) NSArray * inputPointsR;              //@synthesize inputPointsR=_inputPointsR - In the implementation block
@property (retain) NSArray * inputPointsG;              //@synthesize inputPointsG=_inputPointsG - In the implementation block
@property (retain) NSArray * inputPointsB;              //@synthesize inputPointsB=_inputPointsB - In the implementation block
@property (retain) NSArray * inputPointsL;              //@synthesize inputPointsL=_inputPointsL - In the implementation block
+(id)tableImageFromRed:(const float*)arg1 green:(const float*)arg2 blue:(const float*)arg3 luminance:(const float*)arg4 ;
+(vector<float, std::__1::allocator<float> >*)calculateCurveTable:(id)arg1 ;
+(id)curvePointsFromDictionaries:(id)arg1 ;
-(id)outputImage;
-(NSArray *)inputPointsR;
-(void)setInputPointsR:(NSArray *)arg1 ;
-(NSArray *)inputPointsG;
-(void)setInputPointsG:(NSArray *)arg1 ;
-(NSArray *)inputPointsB;
-(void)setInputPointsB:(NSArray *)arg1 ;
-(NSArray *)inputPointsL;
-(void)setInputPointsL:(NSArray *)arg1 ;
@end

