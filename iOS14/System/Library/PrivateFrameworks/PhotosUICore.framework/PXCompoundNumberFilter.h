/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNumberFilter.h>

@class NSArray;

@interface PXCompoundNumberFilter : PXNumberFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(double)updatedOutput;
@end

