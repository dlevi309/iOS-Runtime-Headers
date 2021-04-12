/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol PLThumbPersistenceManager;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary, NSLock, NSArray, PLPhotoLibraryPathManager;

@interface PLThumbnailManagerCore : NSObject {

	NSMutableDictionary* _thumbnailConfigurationDict;
	os_unfair_lock_s _ivarLock;
	NSLock* _thumbManagersLock;
	id<PLThumbPersistenceManager> _lastUsedThumbManager;
	unsigned short _lastUsedThumbManagerFormatID;
	NSArray* _fastImageTables;
	NSMutableDictionary* _thumbManagersByFormat;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (readonly) NSMutableDictionary * thumbManagersByFormat;              //@synthesize thumbManagersByFormat=_thumbManagersByFormat - In the implementation block
@property (readonly) PLPhotoLibraryPathManager * pathManager;                  //@synthesize pathManager=_pathManager - In the implementation block
+(id)supportedThumbnailFormatIDs;
+(id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1 ;
-(void)dealloc;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)thumbManagerForFormatID:(unsigned short)arg1 thumbFileManagerClass:(Class)arg2 ;
-(id)fastThumbPersistenceManagers;
-(id)imageTableSpecifications;
-(BOOL)useImageTableForFormat:(unsigned short)arg1 ;
-(void)stampThumbnailConfigurationToFile:(BOOL)arg1 ;
-(int)thumbnailVersionCurrent;
-(id)thumbnailConfigurationDict;
-(id)thumbnailConfigurationPath;
-(id)initWithPhotoLibraryPathManager:(id)arg1 ;
-(id)supportedTableFormats;
-(id)_thumbManagerForFormatID:(unsigned short)arg1 ;
-(NSMutableDictionary *)thumbManagersByFormat;
@end

