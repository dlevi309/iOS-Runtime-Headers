/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotosDataSourceProvider.h>

@class NSArray, NSString;

@interface _PXPhotosViewSearchResultsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {

	NSArray* _assetUUIDs;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1 ;
-(id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg1 ;
-(id)localizedInitialLoadingStatusMessageForDataSourceManager:(id)arg1 ;
-(id)initWithAssetUUIDs:(id)arg1 searchTitle:(id)arg2 ;
@end

