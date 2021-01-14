/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)backingResourceForVideoResource:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 asset:(id)arg2 ;
-(BOOL)validateResource:(id)arg1 ;
-(BOOL)shouldUseNonAdjustedVersion;
-(void)repairResource:(id)arg1 ;
-(double)sizeThresholdForHighQuality;
-(id)videoResourcesMatchingVersions:(id)arg1 ;
-(id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
-(BOOL)isPhotoIris;
-(BOOL)hasAdjustments;
@end

