/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSMutableDictionary, NSHashTable;

@interface WFRemoteExecutionFileCoordinator : NSObject {

	NSMutableDictionary* _waitingFiles;
	NSHashTable* _waitingArchivers;

}

@property (nonatomic,retain) NSMutableDictionary * waitingFiles;              //@synthesize waitingFiles=_waitingFiles - In the implementation block
@property (nonatomic,retain) NSHashTable * waitingArchivers;                  //@synthesize waitingArchivers=_waitingArchivers - In the implementation block
-(id)init;
-(void)handleFile:(id)arg1 withIdentifier:(id)arg2 ;
-(void)registerArchiver:(id)arg1 ;
-(NSMutableDictionary *)waitingFiles;
-(void)setWaitingFiles:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)waitingArchivers;
-(void)setWaitingArchivers:(NSHashTable *)arg1 ;
@end

