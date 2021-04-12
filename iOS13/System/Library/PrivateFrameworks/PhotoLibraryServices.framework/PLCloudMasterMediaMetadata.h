/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLCloudMaster, PLAdditionalAssetAttributes;

@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * additionalAssetAttributes; 
+(id)entityName;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4 ;
@end

