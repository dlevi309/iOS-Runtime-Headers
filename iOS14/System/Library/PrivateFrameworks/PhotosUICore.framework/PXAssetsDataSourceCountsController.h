/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceCountsController.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXAssetsDataSourceManager, NSString;

@interface PXAssetsDataSourceCountsController : PXObservable <PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver> {

	NSObject*<OS_dispatch_queue> _prepareCountsQueue;
	BOOL _isPreparingAssetTypeCounts;
	BOOL _hasUsableCounts;
	BOOL _waitingToPrepare;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	SCD_Struct_PX144 _counts;

}

@property (assign,nonatomic) BOOL isPreparingAssetTypeCounts;                                    //@synthesize isPreparingAssetTypeCounts=_isPreparingAssetTypeCounts - In the implementation block
@property (assign,nonatomic) BOOL hasUsableCounts;                                               //@synthesize hasUsableCounts=_hasUsableCounts - In the implementation block
@property (assign,nonatomic) BOOL waitingToPrepare;                                              //@synthesize waitingToPrepare=_waitingToPrepare - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * assetsDataSourceManager;              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX144 counts;                                          //@synthesize counts=_counts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasUsableCounts;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(SCD_Struct_PX144)counts;
-(id)init;
-(BOOL)waitingToPrepare;
-(void)setIsPreparingAssetTypeCounts:(BOOL)arg1 ;
-(void)setCounts:(SCD_Struct_PX144)arg1 ;
-(void)_prepareFetchResults:(id)arg1 ;
-(void)_handlePreparationCompletion;
-(void)setHasUsableCounts:(BOOL)arg1 ;
-(void)_prepareCounts;
-(void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1 ;
-(void)setWaitingToPrepare:(BOOL)arg1 ;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(BOOL)isPreparingAssetTypeCounts;
-(void)_dataSourceManagerDidChange;
-(void)_updateCounts;
-(void)prepareCountsIfNeeded;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

