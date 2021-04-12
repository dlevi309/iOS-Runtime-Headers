/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKGridLayoutManager.h>

@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager {

	NSRange _ignoreRange;

}

@property (assign,nonatomic) NSRange ignoreRange;              //@synthesize ignoreRange=_ignoreRange - In the implementation block
+(id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3 ;
-(double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3 ;
-(CGSize)sizeForFittingSize:(CGSize)arg1 forRow:(id)arg2 ;
-(void)setIgnoreRange:(NSRange)arg1 ;
-(NSRange)ignoreRange;
@end

