/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UILabel.h>

@class NSDictionary;

@interface _UIActivityIndicatorMessageLabel : UILabel {

	NSDictionary* _regularTextAttributes;
	NSDictionary* _effectiveTextAttributes;

}

@property (nonatomic,copy) NSDictionary * regularTextAttributes;                         //@synthesize regularTextAttributes=_regularTextAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * effectiveTextAttributes;              //@synthesize effectiveTextAttributes=_effectiveTextAttributes - In the implementation block
@property (nonatomic,readonly) double verticalSpacingToSpinner; 
+(id)defaultRegularContentSizeTextAttributes;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(double)verticalSpacingToSpinner;
-(id)initWithRegularTextAttributes:(id)arg1 ;
-(void)_ensureCapableOfCalculatingBaselineOffsets;
-(NSDictionary *)effectiveTextAttributes;
-(id)_validatedAttributedString:(id)arg1 ;
-(double)_effectiveVerticalSpacingToSpinner;
-(void)setEffectiveTextAttributes:(NSDictionary *)arg1 ;
-(id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1 ;
-(NSDictionary *)regularTextAttributes;
-(void)setRegularTextAttributes:(NSDictionary *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

