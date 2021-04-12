/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface RPFileTransferSmallFilesTask : NSObject {

	BOOL _needsRetry;
	NSMutableArray* _fileItems;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskID;

}

@property (nonatomic,retain) NSMutableArray * fileItems;                      //@synthesize fileItems=_fileItems - In the implementation block
@property (assign,nonatomic) BOOL needsRetry;                                 //@synthesize needsRetry=_needsRetry - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long taskID;                       //@synthesize taskID=_taskID - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)fileItems;
-(void)setFileItems:(NSMutableArray *)arg1 ;
-(unsigned long long)taskID;
-(void)setTaskID:(unsigned long long)arg1 ;
-(BOOL)needsRetry;
-(void)setNeedsRetry:(BOOL)arg1 ;
@end

