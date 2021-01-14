/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)taskID;
-(void)setFileItems:(NSMutableArray *)arg1 ;
-(void)setTaskID:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)fileItems;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)needsRetry;
-(void)setNeedsRetry:(BOOL)arg1 ;
@end

