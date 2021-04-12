/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Foundation/NSOperation.h>

@class MiroAutoEditor, MiroMemory, MiroCloudDownloader, MiroAutoEditController;

@interface MiroAutoEditOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _shouldSave;
	int _requestID;
	MiroAutoEditor* _autoEditorParent;
	MiroMemory* _memory;
	/*^block*/id _cleanupHandler;
	MiroCloudDownloader* _cloudDownloader;
	MiroAutoEditController* _autoEditController;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;              //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (retain) MiroAutoEditController * autoEditController;                  //@synthesize autoEditController=_autoEditController - In the implementation block
@property (assign,nonatomic) int requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (retain) MiroAutoEditor * autoEditorParent;                            //@synthesize autoEditorParent=_autoEditorParent - In the implementation block
@property (retain) MiroMemory * memory;                                          //@synthesize memory=_memory - In the implementation block
@property (copy) id cleanupHandler;                                              //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (assign) BOOL shouldSave;                                              //@synthesize shouldSave=_shouldSave - In the implementation block
-(void)start;
-(void)finished;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)cleanupHandler;
-(MiroMemory *)memory;
-(void)setCleanupHandler:(id)arg1 ;
-(int)requestID;
-(void)setRequestID:(int)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)setShouldSave:(BOOL)arg1 ;
-(BOOL)shouldSave;
-(MiroAutoEditController *)autoEditController;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(MiroCloudDownloader *)cloudDownloader;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
-(BOOL)shouldCancelOnNonLocalAssets;
-(void)setAutoEditorParent:(MiroAutoEditor *)arg1 ;
-(MiroAutoEditor *)autoEditorParent;
-(BOOL)shouldDownload;
-(void)performAutoEditAsynchronously;
-(void)_downloadWithCompletionHandler:(/*^block*/id)arg1 ;
@end

