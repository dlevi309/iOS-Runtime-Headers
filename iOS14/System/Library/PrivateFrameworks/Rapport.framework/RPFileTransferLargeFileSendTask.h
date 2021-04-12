/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
#import <Rapport/Rapport-Structs.h>
@class RPFileTransferItem, NSObject;

@interface RPFileTransferLargeFileSendTask : NSObject {

	BOOL _failed;
	int _fileFD;
	int _outstandingSends;
	unsigned long long _remainingSize;
	unsigned _sentFlags;
	CC_SHA256state_st _sha256Ctx;
	unsigned _xid;
	BOOL _needsRetry;
	RPFileTransferItem* _fileItem;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskID;

}

@property (assign,nonatomic) int fileFD;                                      //@synthesize fileFD=_fileFD - In the implementation block
@property (nonatomic,retain) RPFileTransferItem * fileItem;                   //@synthesize fileItem=_fileItem - In the implementation block
@property (assign,nonatomic) BOOL needsRetry;                                 //@synthesize needsRetry=_needsRetry - In the implementation block
@property (assign,nonatomic) int outstandingSends;                            //@synthesize outstandingSends=_outstandingSends - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long remainingSize;                //@synthesize remainingSize=_remainingSize - In the implementation block
@property (assign,nonatomic) unsigned long long taskID;                       //@synthesize taskID=_taskID - In the implementation block
-(unsigned long long)taskID;
-(int)fileFD;
-(void)setTaskID:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RPFileTransferItem *)fileItem;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)needsRetry;
-(void)setNeedsRetry:(BOOL)arg1 ;
-(void)setFileFD:(int)arg1 ;
-(void)setFileItem:(RPFileTransferItem *)arg1 ;
-(int)outstandingSends;
-(void)setOutstandingSends:(int)arg1 ;
-(unsigned long long)remainingSize;
-(void)setRemainingSize:(unsigned long long)arg1 ;
@end

