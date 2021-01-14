/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface BLEduCloudContainer : NSObject {

	NSURL* _documentsURL;
	id _cloudToken;
	NSURL* _containerURL;
	NSObject*<OS_dispatch_queue> _containerQueue;

}

@property (nonatomic,retain) id cloudToken;                                            //@synthesize cloudToken=_cloudToken - In the implementation block
@property (nonatomic,readonly) NSURL * documentsURL;                                   //@synthesize documentsURL=_documentsURL - In the implementation block
@property (nonatomic,retain) NSURL * containerURL;                                     //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> containerQueue;              //@synthesize containerQueue=_containerQueue - In the implementation block
+(id)sharedEduCloudContainer;
-(BOOL)isSignedIn;
-(id)init;
-(void)setContainerURL:(NSURL *)arg1 ;
-(NSURL *)documentsURL;
-(NSURL *)containerURL;
-(BOOL)addBookItem:(id)arg1 error:(id*)arg2 ;
-(id)allBookItems;
-(NSObject*<OS_dispatch_queue>)containerQueue;
-(id)cloudToken;
-(id)fileNameForPermlink:(id)arg1 ;
-(id)cloudUrlForPermlink:(id)arg1 ;
-(BOOL)_writePlist:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)bookItemForURL:(id)arg1 ;
-(BOOL)_addOrUpdateCloudEntryWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_coordinatedReadOfPromisesWithError:(id*)arg1 ;
-(id)dictionaryAsBookItem:(id)arg1 path:(id)arg2 ;
-(id)performMetadataActionOnCloudURL:(id)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)removeBookItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateBookItem:(id)arg1 error:(id*)arg2 ;
-(id)bookItemForPermlink:(id)arg1 ;
-(void)setCloudToken:(id)arg1 ;
-(id)bookItemsForPermlinks:(id)arg1 ;
-(void)setContainerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

