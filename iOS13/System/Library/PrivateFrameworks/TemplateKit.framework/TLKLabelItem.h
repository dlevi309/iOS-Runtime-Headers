/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <libobjc.A.dylib/TLKGridArrangementItem.h>

@class NUISizeCache, TLKRichText, NSString;

@interface TLKLabelItem : NSObject <TLKGridArrangementItem> {

	unsigned long long row;
	double horizontalHuggingPriority;
	double horizontalCompressionResistance;
	NUISizeCache* sizeCache;
	TLKRichText* _richText;
	NSRange columnRange;
	CGRect frame;

}

@property (nonatomic,retain) TLKRichText * richText;                              //@synthesize richText=_richText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) NSRange columnRange; 
@property (assign,nonatomic) unsigned long long row; 
@property (assign,nonatomic) double horizontalHuggingPriority; 
@property (assign,nonatomic) double horizontalCompressionResistance; 
@property (nonatomic,retain) NUISizeCache * sizeCache; 
+(void)initialize;
+(id)font;
+(void)setFontValues;
+(double)minimumWidthForLabelItem;
-(id)init;
-(NSString *)description;
-(CGRect)frame;
-(id)attributedString;
-(void)setFrame:(CGRect)arg1 ;
-(unsigned long long)row;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveBaselineOffsetFromContentBottom;
-(double)effectiveFirstBaselineOffsetFromContentTop;
-(void)setRow:(unsigned long long)arg1 ;
-(TLKRichText *)richText;
-(void)setRichText:(TLKRichText *)arg1 ;
-(void)setSizeCache:(NUISizeCache *)arg1 ;
-(double)horizontalCompressionResistance;
-(double)horizontalHuggingPriority;
-(CGSize)sizeForTargetSize:(CGSize)arg1 ;
-(NSRange)columnRange;
-(void)setColumnRange:(NSRange)arg1 ;
-(void)setHorizontalHuggingPriority:(double)arg1 ;
-(void)setHorizontalCompressionResistance:(double)arg1 ;
-(NUISizeCache *)sizeCache;
@end

