/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
#import <Rapport/Rapport-Structs.h>
@class RPFileTransferItem, NSObject;

@interface RPFileTransferLargeFileReceiveTask : NSObject {

	int _fileFD;
	CC_SHA256state_st _sha256Ctx;
	RPFileTransferItem* _fileItem;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskID;

}

@property (assign,nonatomic) int fileFD;                                      //@synthesize fileFD=_fileFD - In the implementation block
@property (nonatomic,retain) RPFileTransferItem * fileItem;                   //@synthesize fileItem=_fileItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long taskID;                       //@synthesize taskID=_taskID - In the implementation block
-(unsigned long long)taskID;
-(int)fileFD;
-(void)setTaskID:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RPFileTransferItem *)fileItem;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFileFD:(int)arg1 ;
-(void)setFileItem:(RPFileTransferItem *)arg1 ;
@end

