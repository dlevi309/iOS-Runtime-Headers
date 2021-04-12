/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMutableImportController <NSObject>
@property (assign,getter=isLoadingContent,nonatomic) BOOL loadingContent; 
@property (assign,getter=isImportingAssets,nonatomic) BOOL importingAssets; 
@property (assign,getter=isDeletingAssets,nonatomic) BOOL deletingAssets; 
@property (assign,getter=isUserRequiredToTrustHostOnSourceDevice,nonatomic) BOOL userRequiredToTrustHostOnSourceDevice; 
@property (assign,nonatomic) BOOL hasLoadedInitialBatchOfAssets; 
@property (assign,getter=isLoadingInitialBatchOfAssets,nonatomic) BOOL loadingInitialBatchOfAssets; 
@required
-(BOOL)isUserRequiredToTrustHostOnSourceDevice;
-(void)setLoadingContent:(BOOL)arg1;
-(void)setImportingAssets:(BOOL)arg1;
-(void)setDeletingAssets:(BOOL)arg1;
-(void)setUserRequiredToTrustHostOnSourceDevice:(BOOL)arg1;
-(void)setHasLoadedInitialBatchOfAssets:(BOOL)arg1;
-(void)setLoadingInitialBatchOfAssets:(BOOL)arg1;
-(BOOL)isDeletingAssets;
-(BOOL)isImportingAssets;
-(BOOL)isLoadingInitialBatchOfAssets;
-(BOOL)hasLoadedInitialBatchOfAssets;
-(BOOL)isLoadingContent;

@end

