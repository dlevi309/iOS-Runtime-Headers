/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <libobjc.A.dylib/NUIArrangementItem.h>

@class NSString;

@interface TLKArrangementItem : NSObject <NUIArrangementItem> {

	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveBaselineOffsetFromContentBottom;
-(double)effectiveFirstBaselineOffsetFromContentTop;
@end

