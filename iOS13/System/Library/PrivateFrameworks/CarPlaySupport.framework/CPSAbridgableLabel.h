/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSArray;

@interface CPSAbridgableLabel : UILabel {

	NSArray* _textVariants;
	NSArray* _attributedTextVariants;
	unsigned long long _variantsIndex;

}

@property (assign,nonatomic) unsigned long long variantsIndex;              //@synthesize variantsIndex=_variantsIndex - In the implementation block
@property (nonatomic,copy) NSArray * textVariants;                          //@synthesize textVariants=_textVariants - In the implementation block
@property (nonatomic,copy) NSArray * attributedTextVariants;                //@synthesize attributedTextVariants=_attributedTextVariants - In the implementation block
+(id)sanitizedTextForText:(id)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setTextVariants:(NSArray *)arg1 ;
-(NSArray *)textVariants;
-(void)setAttributedTextVariants:(NSArray *)arg1 ;
-(void)_updateVariant;
-(id)sanitizedAttributedStringForString:(id)arg1 ;
-(id)_variantsList;
-(unsigned long long)variantsIndex;
-(unsigned long long)_numberOfVariants;
-(long long)_compareBoundsSizeToLayoutSizeForString:(id)arg1 ;
-(void)setVariantsIndex:(unsigned long long)arg1 ;
-(NSArray *)attributedTextVariants;
@end

