/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUReviewDataSourceChangeObserver.h>

@protocol PUReviewAssetsDataSourceManagerDelegate, PUDisplayAssetCollection;
@class PUReviewDataSource, NSString;

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager <PUReviewDataSourceChangeObserver> {

	id<PUReviewAssetsDataSourceManagerDelegate> _reviewDelegate;
	PUReviewDataSource* __reviewDataSource;
	id<PUDisplayAssetCollection> __containingAssetCollection;

}

@property (nonatomic,readonly) PUReviewDataSource * _reviewDataSource;                                       //@synthesize _reviewDataSource=__reviewDataSource - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAssetCollection> _containingAssetCollection;                      //@synthesize _containingAssetCollection=__containingAssetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PUReviewAssetsDataSourceManagerDelegate> reviewDelegate;              //@synthesize reviewDelegate=_reviewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)reviewDataSourceDidChange:(id)arg1 changeDetails:(id)arg2 ;
-(id)initWithReviewDataSource:(id)arg1 ;
-(void)_updateWithReviewDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(id<PUReviewAssetsDataSourceManagerDelegate>)reviewDelegate;
-(void)setReviewDelegate:(id<PUReviewAssetsDataSourceManagerDelegate>)arg1 ;
-(PUReviewDataSource *)_reviewDataSource;
-(id<PUDisplayAssetCollection>)_containingAssetCollection;
-(void)dealloc;
@end

