/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
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
	CGSize _naturalSize;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;              //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (retain) MiroAutoEditController * autoEditController;                  //@synthesize autoEditController=_autoEditController - In the implementation block
@property (assign,nonatomic) int requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (retain) MiroAutoEditor * autoEditorParent;                            //@synthesize autoEditorParent=_autoEditorParent - In the implementation block
@property (retain) MiroMemory * memory;                                          //@synthesize memory=_memory - In the implementation block
@property (copy) id cleanupHandler;                                              //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (assign) BOOL shouldSave;                                              //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                 //@synthesize naturalSize=_naturalSize - In the implementation block
-(MiroMemory *)memory;
-(void)finished;
-(CGSize)naturalSize;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)shouldSave;
-(int)requestID;
-(void)setShouldSave:(BOOL)arg1 ;
-(id)cleanupHandler;
-(void)setMemory:(MiroMemory *)arg1 ;
-(BOOL)isExecuting;
-(void)setRequestID:(int)arg1 ;
-(void)setCleanupHandler:(id)arg1 ;
-(MiroAutoEditController *)autoEditController;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(MiroAutoEditor *)autoEditorParent;
-(MiroCloudDownloader *)cloudDownloader;
-(id)initWithNaturalSize:(CGSize)arg1 ;
-(BOOL)shouldDownload;
-(BOOL)shouldCancelOnNonLocalAssets;
-(void)performAutoEditAsynchronouslyWithNaturalSize:(CGSize)arg1 ;
-(void)setAutoEditorParent:(MiroAutoEditor *)arg1 ;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
@end

