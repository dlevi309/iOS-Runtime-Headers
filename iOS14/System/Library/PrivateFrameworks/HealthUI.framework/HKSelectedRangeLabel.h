/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UILabel.h>

@interface HKSelectedRangeLabel : UILabel {

	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;              //@synthesize padding=_padding - In the implementation block
+(void)clearCaches;
+(id)standardPrefixColorForSelectedRangeData:(id)arg1 defaultColor:(id)arg2 ;
+(id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefixColor:(id)arg4 prefersImageAffixes:(BOOL)arg5 ;
+(id)_attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefixColor:(id)arg4 prefersImageAffixes:(BOOL)arg5 embedded:(BOOL)arg6 ;
+(id)_attributedMultiplePrefixStringForSelectedRangeData:(id)arg1 attributedString:(id)arg2 font:(id)arg3 foregroundColor:(id)arg4 ;
+(id)_stringForSelectedRangeData:(id)arg1 embedded:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)drawTextInRect:(CGRect)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelectedRangeData:(id)arg1 ;
@end

