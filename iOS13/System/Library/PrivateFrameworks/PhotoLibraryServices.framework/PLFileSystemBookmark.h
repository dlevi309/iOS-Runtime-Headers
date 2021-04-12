/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSData, NSString, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject {

	NSURL* _fileSystemURL;

}

@property (nonatomic,retain) NSData * bookmarkData; 
@property (nonatomic,retain) NSString * pathRelativeToVolume; 
@property (nonatomic,retain) PLInternalResource * resource; 
+(id)entityName;
+(id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2 ;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)fileSystemURL;
@end

