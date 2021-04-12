/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(void)setDefaults;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(NSNumber *)inputOpacity;
-(NSArray *)inputPoints;
-(id)outputImage;
-(void)setInputPoints:(NSArray *)arg1 ;
-(id)_applyOpacity:(double)arg1 toMask:(id)arg2 ;
-(NSNumber *)inputTiled;
-(void)setInputTiled:(NSNumber *)arg1 ;
-(NSNumber *)inputClosed;
-(void)setInputClosed:(NSNumber *)arg1 ;
-(NSNumber *)inputPressureMode;
-(void)setInputPressureMode:(NSNumber *)arg1 ;
@end

