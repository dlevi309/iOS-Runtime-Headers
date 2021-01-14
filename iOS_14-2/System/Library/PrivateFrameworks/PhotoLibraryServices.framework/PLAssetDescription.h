/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (nonatomic,retain) NSString * longDescription; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityName;
+(id)listOfSyncedProperties;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)willSave;
-(void)prepareForDeletion;
-(BOOL)isSyncableChange;
@end

