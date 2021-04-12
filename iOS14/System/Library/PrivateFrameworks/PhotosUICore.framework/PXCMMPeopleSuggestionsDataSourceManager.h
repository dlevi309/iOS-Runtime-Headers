/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCMMPeopleSuggestionsDataSource;

@interface PXCMMPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic,readonly) PXCMMPeopleSuggestionsDataSource * dataSource; 
-(void)cancelLoading;
-(BOOL)isLoading;
-(void)startLoading;
-(void)boostLoading;
@end

