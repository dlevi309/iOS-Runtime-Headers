/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(double)effectiveFirstBaselineOffsetFromContentTop;
-(void)setSize:(CGSize)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveBaselineOffsetFromContentBottom;
@end

