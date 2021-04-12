/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLCloudMaster, PLAdditionalAssetAttributes;

@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * additionalAssetAttributes; 
+(id)entityName;
-(void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4 ;
-(id)payloadsForChangedKeys:(id)arg1 ;
@end

