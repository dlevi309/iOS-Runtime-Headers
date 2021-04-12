/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLVideoResourceContext.h>
#import <libobjc.A.dylib/PLVideoChoosingAssetInformation.h>

@class NSManagedObjectContext, PLManagedAsset, NSString;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {

	NSManagedObjectContext* _moc;
	PLManagedAsset* _asset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasAdjustments;
-(BOOL)isPhotoIris;
-(BOOL)shouldUseNonAdjustedVersion;
-(double)sizeThresholdForHighQuality;
-(id)videoResourcesMatchingVersions:(id)arg1 ;
-(id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
-(BOOL)validateResource:(id)arg1 ;
-(void)repairResource:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 assetObjectID:(id)arg2 ;
-(id)backingResourceForVideoResource:(id)arg1 ;
@end

