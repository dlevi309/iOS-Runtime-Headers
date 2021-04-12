/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <TemplateKit/TLKLabel.h>

@class NSString, NSAttributedString;

@interface FULabel : TLKLabel {

	NSString* _stringValue;
	NSAttributedString* _attributedStringValue;
	FULabel* _realAssociatedScalingLabel;
	BOOL _uppercase;
	BOOL _useCurrentLocale;
	/*^block*/id _onTap;
	FULabel* _associatedScalingLabel;

}

@property (copy) id onTap;                                                         //@synthesize onTap=_onTap - In the implementation block
@property (nonatomic,readonly) BOOL uppercase;                                     //@synthesize uppercase=_uppercase - In the implementation block
@property (readonly) BOOL useCurrentLocale;                                        //@synthesize useCurrentLocale=_useCurrentLocale - In the implementation block
@property (assign,nonatomic,__weak) FULabel * associatedScalingLabel;              //@synthesize associatedScalingLabel=_associatedScalingLabel - In the implementation block
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(void)awakeFromNib;
-(id)_associatedScalingLabel;
-(void)setAssociatedLabel:(id)arg1 ;
-(void)performTap:(id)arg1 ;
-(id)onTap;
-(FULabel *)associatedScalingLabel;
-(BOOL)uppercase;
-(BOOL)useCurrentLocale;
-(void)setUppercase:(BOOL)arg1 usingCurrentLocale:(BOOL)arg2 ;
-(void)setStyleProvider:(id)arg1 primaryStyle:(BOOL)arg2 ;
-(void)setOnTap:(id)arg1 ;
-(void)setAssociatedScalingLabel:(FULabel *)arg1 ;
@end

