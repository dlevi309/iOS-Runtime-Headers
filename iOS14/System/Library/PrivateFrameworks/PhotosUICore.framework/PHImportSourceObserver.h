/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PHImportSourceObserver
@required
-(void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
-(void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
-(void)nameDidChangeForImportSource:(id)arg1;
-(void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
-(void)importSource:(id)arg1 didAddAssets:(id)arg2;
-(void)capabilitiesDidChangeForImportSource:(id)arg1;
-(void)userHasTrustedHostForImportSource:(id)arg1;
-(void)userRequiredToTrustHostForImportSource:(id)arg1;

@end

