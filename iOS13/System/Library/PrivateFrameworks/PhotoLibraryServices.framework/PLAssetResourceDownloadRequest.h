/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, NSString, NSManagedObjectID, NSError;

@interface PLAssetResourceDownloadRequest : NSOperation {

	NSObject*<OS_dispatch_queue> _queue;
	PLPhotoLibrary* _library;
	/*^block*/id _progressHandler;
	NSString* _assetUUID;
	int _requestID;
	NSManagedObjectID* _objectID;
	unsigned long long _cloudResourceType;
	NSString* _cplTaskIdentifier;
	NSError* _error;

}

@property (nonatomic,readonly) int requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudResourceType;              //@synthesize cloudResourceType=_cloudResourceType - In the implementation block
@property (nonatomic,readonly) NSString * cplTaskIdentifier;                      //@synthesize cplTaskIdentifier=_cplTaskIdentifier - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)cancel;
-(void)main;
-(NSManagedObjectID *)objectID;
-(int)requestID;
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(id)initWithRequestID:(int)arg1 library:(id)arg2 queue:(id)arg3 cloudResourceType:(unsigned long long)arg4 managedObjectID:(id)arg5 progressHandler:(/*^block*/id)arg6 ;
-(unsigned long long)cloudResourceType;
-(NSString *)cplTaskIdentifier;
@end

