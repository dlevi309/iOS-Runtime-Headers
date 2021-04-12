/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)_loadExistingArchivePaths;
-(void)_pruneOldArchives;
-(void)_onQueueFlush;
-(id)_archiveForRequest:(id)arg1 ;
-(id)_archiveForResponse:(id)arg1 responseData:(id)arg2 ;
-(id)_archiveCreator;
-(id)_arrayFromHeaderDictionary:(id)arg1 ;
-(void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3 ;
@end

