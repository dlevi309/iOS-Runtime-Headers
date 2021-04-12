/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (nonatomic,retain) NSString * longDescription; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityName;
+(id)listOfSyncedProperties;
-(void)prepareForDeletion;
-(void)willSave;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isSyncableChange;
@end

