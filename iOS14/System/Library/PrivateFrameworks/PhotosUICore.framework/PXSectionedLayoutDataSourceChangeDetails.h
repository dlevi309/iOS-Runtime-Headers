/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXArrayChangeDetails, NSIndexSet;


@protocol PXSectionedLayoutDataSourceChangeDetails <PXLayoutDataSourceChangeDetails>
@property (nonatomic,readonly) PXArrayChangeDetails * sectionChanges; 
@property (nonatomic,readonly) NSIndexSet * sectionsWithItemChanges; 
@required
-(PXArrayChangeDetails *)sectionChanges;
-(NSIndexSet *)sectionsWithItemChanges;
-(id)itemChangesInSection:(long long)arg1;

@end

