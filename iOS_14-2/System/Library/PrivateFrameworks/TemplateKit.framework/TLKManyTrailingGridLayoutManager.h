/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKGridLayoutManager.h>

@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager {

	NSRange _ignoreRange;

}

@property (assign,nonatomic) NSRange ignoreRange;              //@synthesize ignoreRange=_ignoreRange - In the implementation block
+(id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3 ;
-(CGSize)sizeForFittingSize:(CGSize)arg1 forRow:(id)arg2 ;
-(void)setIgnoreRange:(NSRange)arg1 ;
-(NSRange)ignoreRange;
-(double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3 ;
@end

