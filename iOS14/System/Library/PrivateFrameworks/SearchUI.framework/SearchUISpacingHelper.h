/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <libobjc.A.dylib/NUIArrangementItem.h>

@class NSString;

@interface SearchUISpacingHelper : NSObject <NUIArrangementItem> {

	double _compressionResistance;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double compressionResistance;              //@synthesize compressionResistance=_compressionResistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)idealHorizontalSpacingBetweenIcons;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(CGRect)frame;
-(double)effectiveFirstBaselineOffsetFromContentTop;
-(void)setCompressionResistance:(double)arg1 ;
-(NSString *)description;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(double)compressionResistance;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveBaselineOffsetFromContentBottom;
@end

