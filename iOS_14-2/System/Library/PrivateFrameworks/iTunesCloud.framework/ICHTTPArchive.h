/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSString, NSDateFormatter, NSDictionary;

@interface ICHTTPArchive : NSObject {

	NSMutableArray* _loggedEvents;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _flushTimer;
	NSString* _currentArchiveFileName;
	NSDateFormatter* _dateFormatter;
	NSDictionary* _creatorDictionary;
	NSString* _archiveDirectoryPath;
	NSMutableArray* _archiveFilePaths;
	BOOL _hasValidArchiveDirectory;

}
+(id)sharedArchive;
-(void)flush;
-(void)_loadExistingArchivePaths;
-(id)init;
-(id)_archiveForRequest:(id)arg1 ;
-(id)_arrayFromHeaderDictionary:(id)arg1 ;
-(id)_archiveCreator;
-(void)_onQueueFlush;
-(id)_archiveForResponse:(id)arg1 responseData:(id)arg2 ;
-(void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3 ;
-(void)_pruneOldArchives;
-(void)dealloc;
@end

