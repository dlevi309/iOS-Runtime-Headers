/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUValueFilter.h>

@class NSArray;

@interface PUGroupValueFilter : PUValueFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(double)outputValue;
-(void)setInputValue:(double)arg1 ;
@end

