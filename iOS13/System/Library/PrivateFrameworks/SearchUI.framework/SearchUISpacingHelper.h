/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveBaselineOffsetFromContentBottom;
-(double)effectiveFirstBaselineOffsetFromContentTop;
-(double)compressionResistance;
-(void)setCompressionResistance:(double)arg1 ;
@end

