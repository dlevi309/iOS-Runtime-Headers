/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHAsset, NSString;

@interface _PXAssetAnalyzerRequest : NSObject <PXPhotoLibraryUIChangeObserver> {

	/*^block*/id _resultHandler;
	BOOL _finished;
	PHAsset* _asset;
	long long _workerType;

}

@property (readonly) PHAsset * asset;                               //@synthesize asset=_asset - In the implementation block
@property (readonly) long long workerType;                          //@synthesize workerType=_workerType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHAsset *)asset;
-(void)_handleFinishWithSuccess:(BOOL)arg1 ;
-(void)runWithResultHandler:(/*^block*/id)arg1 ;
-(id)initWithAsset:(id)arg1 workerType:(long long)arg2 ;
-(long long)workerType;
@end

