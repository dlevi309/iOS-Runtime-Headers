/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSArray;

@interface CPSAbridgableLabel : UILabel {

	BOOL _useAttributedTextVariants;
	NSArray* _textVariants;
	NSArray* _attributedTextVariants;
	unsigned long long _variantsIndex;

}

@property (assign,nonatomic) unsigned long long variantsIndex;              //@synthesize variantsIndex=_variantsIndex - In the implementation block
@property (assign,nonatomic) BOOL useAttributedTextVariants;                //@synthesize useAttributedTextVariants=_useAttributedTextVariants - In the implementation block
@property (nonatomic,copy) NSArray * textVariants;                          //@synthesize textVariants=_textVariants - In the implementation block
@property (nonatomic,copy) NSArray * attributedTextVariants;                //@synthesize attributedTextVariants=_attributedTextVariants - In the implementation block
+(id)sanitizedTextForText:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(id)init;
-(void)setText:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(unsigned long long)_numberOfVariants;
-(void)setTextVariants:(NSArray *)arg1 ;
-(NSArray *)textVariants;
-(void)setAttributedTextVariants:(NSArray *)arg1 ;
-(void)_updateVariant;
-(id)sanitizedAttributedStringForString:(id)arg1 ;
-(BOOL)useAttributedTextVariants;
-(id)_variantsList;
-(long long)_compareBoundsSizeToLayoutSizeForString:(id)arg1 ;
-(unsigned long long)variantsIndex;
-(void)setVariantsIndex:(unsigned long long)arg1 ;
-(NSArray *)attributedTextVariants;
-(void)setUseAttributedTextVariants:(BOOL)arg1 ;
@end

