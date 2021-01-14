/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLSyncContext.h>

@class NSArray, NSMutableDictionary, PLPhotoLibrary, PLCloudRecordOrganizer, NSString;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {

	NSMutableDictionary* _assetAdjustmentStatesByCloudIdentifier;
	NSArray* _personUUIDsToDedupe;
	PLPhotoLibrary* _photoLibrary;
	PLCloudRecordOrganizer* _recordOrganizer;

}

@property (readonly) PLPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) PLCloudRecordOrganizer * recordOrganizer;              //@synthesize recordOrganizer=_recordOrganizer - In the implementation block
@property (nonatomic,readonly) BOOL serverSupportsVision; 
@property (nonatomic,readonly) BOOL serverSupportsGraphHome; 
@property (nonatomic,copy) NSArray * personUUIDsToDedupe;                   //@synthesize personUUIDsToDedupe=_personUUIDsToDedupe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(id)makeFace;
-(id)personForUUID:(id)arg1 ;
-(BOOL)personUUIDIsDeleted:(id)arg1 ;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg1 ;
-(BOOL)serverSupportsGraphHome;
-(NSArray *)personUUIDsToDedupe;
-(void)setPersonUUIDsToDedupe:(NSArray *)arg1 ;
-(PLCloudRecordOrganizer *)recordOrganizer;
-(void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2 ;
-(BOOL)serverSupportsVision;
-(void)deleteFaces:(id)arg1 ;
@end

