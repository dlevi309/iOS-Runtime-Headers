/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <CoreImage/CIFilter.h>

@class NSNumber, NSArray;

@interface NUBrushMaskGenerator : CIFilter {

	NSNumber* _inputRadius;
	NSNumber* _inputSoftness;
	NSNumber* _inputOpacity;
	NSArray* _inputPoints;
	NSNumber* _inputTiled;
	NSNumber* _inputClosed;
	NSNumber* _inputPressureMode;

}

@property (nonatomic,retain) NSNumber * inputRadius;                    //@synthesize inputRadius=_inputRadius - In the implementation block
@property (nonatomic,retain) NSNumber * inputSoftness;                  //@synthesize inputSoftness=_inputSoftness - In the implementation block
@property (nonatomic,retain) NSNumber * inputOpacity;                   //@synthesize inputOpacity=_inputOpacity - In the implementation block
@property (nonatomic,retain) NSArray * inputPoints;                     //@synthesize inputPoints=_inputPoints - In the implementation block
@property (nonatomic,retain) NSNumber * inputTiled;                     //@synthesize inputTiled=_inputTiled - In the implementation block
@property (nonatomic,retain) NSNumber * inputClosed;                    //@synthesize inputClosed=_inputClosed - In the implementation block
@property (nonatomic,retain) NSNumber * inputPressureMode;              //@synthesize inputPressureMode=_inputPressureMode - In the implementation block
-(id)outputImage;
-(void)setDefaults;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(NSNumber *)inputOpacity;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(NSArray *)inputPoints;
-(void)setInputPoints:(NSArray *)arg1 ;
-(id)_applyOpacity:(double)arg1 toMask:(id)arg2 ;
-(NSNumber *)inputTiled;
-(void)setInputTiled:(NSNumber *)arg1 ;
-(NSNumber *)inputClosed;
-(void)setInputClosed:(NSNumber *)arg1 ;
-(NSNumber *)inputPressureMode;
-(void)setInputPressureMode:(NSNumber *)arg1 ;
@end

