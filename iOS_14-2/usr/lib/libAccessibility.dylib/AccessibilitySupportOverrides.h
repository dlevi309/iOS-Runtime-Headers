/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAccessibility.dylib
*/


@class NSNumber;

@interface AccessibilitySupportOverrides : NSObject {

	NSNumber* _boldText;
	NSNumber* _increaseContrast;
	NSNumber* _reduceTransparency;
	NSNumber* _reduceMotion;
	NSNumber* _onOffLabels;
	NSNumber* _buttonShapes;
	NSNumber* _grayscale;
	NSNumber* _smartInvert;
	NSNumber* _differentiateWithoutColor;

}

@property (nonatomic,retain) NSNumber * boldText;                               //@synthesize boldText=_boldText - In the implementation block
@property (nonatomic,retain) NSNumber * increaseContrast;                       //@synthesize increaseContrast=_increaseContrast - In the implementation block
@property (nonatomic,retain) NSNumber * reduceTransparency;                     //@synthesize reduceTransparency=_reduceTransparency - In the implementation block
@property (nonatomic,retain) NSNumber * reduceMotion;                           //@synthesize reduceMotion=_reduceMotion - In the implementation block
@property (nonatomic,retain) NSNumber * onOffLabels;                            //@synthesize onOffLabels=_onOffLabels - In the implementation block
@property (nonatomic,retain) NSNumber * buttonShapes;                           //@synthesize buttonShapes=_buttonShapes - In the implementation block
@property (nonatomic,retain) NSNumber * grayscale;                              //@synthesize grayscale=_grayscale - In the implementation block
@property (nonatomic,retain) NSNumber * smartInvert;                            //@synthesize smartInvert=_smartInvert - In the implementation block
@property (nonatomic,retain) NSNumber * differentiateWithoutColor;              //@synthesize differentiateWithoutColor=_differentiateWithoutColor - In the implementation block
+(id)shared;
-(NSNumber *)grayscale;
-(void)setGrayscale:(NSNumber *)arg1 ;
-(void)_removeFilterWithName:(id)arg1 ;
-(void)setDifferentiateWithoutColor:(NSNumber *)arg1 ;
-(NSNumber *)differentiateWithoutColor;
-(NSNumber *)reduceMotion;
-(NSNumber *)increaseContrast;
-(void)setReduceTransparency:(NSNumber *)arg1 ;
-(void)_installInvertColorsFilter;
-(NSNumber *)onOffLabels;
-(void)setOnOffLabels:(NSNumber *)arg1 ;
-(NSNumber *)buttonShapes;
-(void)_addFilter:(id)arg1 ;
-(void)setButtonShapes:(NSNumber *)arg1 ;
-(void)setSmartInvert:(NSNumber *)arg1 ;
-(void)_installGrayscaleFilter;
-(void)setIncreaseContrast:(NSNumber *)arg1 ;
-(NSNumber *)reduceTransparency;
-(void)setReduceMotion:(NSNumber *)arg1 ;
-(NSNumber *)boldText;
-(NSNumber *)smartInvert;
-(void)setBoldText:(NSNumber *)arg1 ;
@end

