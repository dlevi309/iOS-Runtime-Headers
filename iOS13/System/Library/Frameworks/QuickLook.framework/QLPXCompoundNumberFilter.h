/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPXNumberFilter.h>

@class NSArray;

@interface QLPXCompoundNumberFilter : QLPXNumberFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(double)updatedOutput;
@end

