/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UILabel.h>

@protocol HFDynamicFormattingValue, NACancelable;
@class NSDictionary, NSArray, UIFont;

@interface HUDynamicFormattingLabel : UILabel {

	id<HFDynamicFormattingValue> _dynamicFormattingValue;
	NSDictionary* _defaultAttributes;
	NSArray* _preferredFonts;
	id<NACancelable> _formattedValueObservationCancellationToken;
	UIFont* _preferredFontForCurrentSize;

}

@property (nonatomic,retain) id<NACancelable> formattedValueObservationCancellationToken;              //@synthesize formattedValueObservationCancellationToken=_formattedValueObservationCancellationToken - In the implementation block
@property (nonatomic,retain) UIFont * preferredFontForCurrentSize;                                     //@synthesize preferredFontForCurrentSize=_preferredFontForCurrentSize - In the implementation block
@property (nonatomic,retain) id<HFDynamicFormattingValue> dynamicFormattingValue;                      //@synthesize dynamicFormattingValue=_dynamicFormattingValue - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultAttributes;                                           //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (nonatomic,copy) NSArray * preferredFonts;                                                   //@synthesize preferredFonts=_preferredFonts - In the implementation block
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(NSDictionary *)defaultAttributes;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(id<HFDynamicFormattingValue>)dynamicFormattingValue;
-(void)setDynamicFormattingValue:(id<HFDynamicFormattingValue>)arg1 ;
-(void)setPreferredFonts:(NSArray *)arg1 ;
-(void)_updateFormattedValueObservation;
-(void)_updateFormattedValueIncludingFont:(BOOL)arg1 ;
-(void)_updatePreferredFontIncludingValue:(BOOL)arg1 ;
-(id<NACancelable>)formattedValueObservationCancellationToken;
-(void)setFormattedValueObservationCancellationToken:(id<NACancelable>)arg1 ;
-(UIFont *)preferredFontForCurrentSize;
-(id)_formattedValueWithFont:(id)arg1 ;
-(NSArray *)preferredFonts;
-(void)setPreferredFontForCurrentSize:(UIFont *)arg1 ;
@end

