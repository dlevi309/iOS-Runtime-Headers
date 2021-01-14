/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue;
@class NSFileManager, NSObject, NSURL;

@interface PUReviewFileManager : NSObject {

	NSFileManager* __fileManager;
	NSObject*<OS_dispatch_queue> __fileManagementQueue;
	NSURL* __safePathURL;

}

@property (nonatomic,readonly) NSFileManager * _fileManager;                                   //@synthesize _fileManager=__fileManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _fileManagementQueue;              //@synthesize _fileManagementQueue=__fileManagementQueue - In the implementation block
@property (nonatomic,readonly) NSURL * _safePathURL;                                           //@synthesize _safePathURL=__safePathURL - In the implementation block
+(id)defaultManager;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)removeItemAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSFileManager *)_fileManager;
-(BOOL)_allowedToDeleteItemAtURL:(id)arg1 ;
-(BOOL)_removeItemAtURL:(id)arg1 error:(id*)arg2 stackshot:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_fileManagementQueue;
-(NSURL *)_safePathURL;
-(id)initWithFileManager:(id)arg1 ;
@end

