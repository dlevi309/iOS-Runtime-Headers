/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setText:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(double)verticalSpacingToSpinner;
-(id)initWithRegularTextAttributes:(id)arg1 ;
-(void)_ensureCapableOfCalculatingBaselineOffsets;
-(double)_effectiveVerticalSpacingToSpinner;
-(id)_validatedAttributedString:(id)arg1 ;
-(NSDictionary *)effectiveTextAttributes;
-(id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1 ;
-(void)setEffectiveTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)regularTextAttributes;
-(void)setRegularTextAttributes:(NSDictionary *)arg1 ;
@end

