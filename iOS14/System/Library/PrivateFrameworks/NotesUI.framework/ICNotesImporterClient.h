/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ICNotesImporterClient : NSObject {

	NSXPCConnection* _connectionToService;
	NSObject*<OS_dispatch_queue> _requestCountQueue;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestCountQueue;              //@synthesize requestCountQueue=_requestCountQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                             //@synthesize requestCount=_requestCount - In the implementation block
-(void)setRequestCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)requestCount;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;
-(void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)parseTitleFromHTMLString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cleanupArchiveId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)requestCountQueue;
-(void)setRequestCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

