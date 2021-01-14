/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSData, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference : PLManagedObject

@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSData * personData; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (nonatomic,retain) PLPerson * person; 
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3 ;
@end

