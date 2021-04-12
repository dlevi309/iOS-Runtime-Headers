/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLFileSystemMetadataPersistence <NSObject>
@required
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1;

@end

