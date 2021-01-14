/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPXNumberFilter.h>

@class NSArray;

@interface QLPXCompoundNumberFilter : QLPXNumberFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(double)updatedOutput;
@end

