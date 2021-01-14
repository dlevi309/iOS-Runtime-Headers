/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAssetsDataSourceManagerDelegate;
@class PUAssetsDataSource;

@interface PUAssetsDataSourceManager : NSObject {

	PUAssetsDataSource* _assetsDataSource;
	id<PUAssetsDataSourceManagerDelegate> _delegate;

}

@property (nonatomic,retain) PUAssetsDataSource * assetsDataSource;                              //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUAssetsDataSourceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PUAssetsDataSourceManagerDelegate>)delegate;
-(void)setDelegate:(id<PUAssetsDataSourceManagerDelegate>)arg1 ;
-(void)setAssetsDataSource:(PUAssetsDataSource *)arg1 ;
-(PUAssetsDataSource *)assetsDataSource;
@end

