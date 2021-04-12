/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXInboxModelDataSourceManagerBase.h>

@class NSString;

@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager <PXInboxModelDataSourceManagerBase>

@property (nonatomic,readonly) PXSectionedDataSource*<PXInboxModelDataSourceBase> dataSource; 
@property (nonatomic,readonly) id<PXInboxProviderSource> providerSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXInboxProviderSource>)providerSource;
@end

