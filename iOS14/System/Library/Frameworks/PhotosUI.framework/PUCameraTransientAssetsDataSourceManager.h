/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUTransientDataSourceChangeObserver.h>

@protocol PUTransientDataSource, PUDisplayAssetCollection;
@class NSString;

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver> {

	id<PUTransientDataSource> __transientDataSource;
	id<PUDisplayAssetCollection> __containingAssetCollection;

}

@property (nonatomic,readonly) id<PUTransientDataSource> _transientDataSource;                       //@synthesize _transientDataSource=__transientDataSource - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAssetCollection> _containingAssetCollection;              //@synthesize _containingAssetCollection=__containingAssetCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PUTransientDataSource>)_transientDataSource;
-(void)transientDataSourceDidChange:(id)arg1 ;
-(id)initWithTransientDataSource:(id)arg1 ;
-(void)_updateWithTransientDataSource:(id)arg1 ;
-(id<PUDisplayAssetCollection>)_containingAssetCollection;
@end

