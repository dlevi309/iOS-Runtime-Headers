/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSASGroupedQueue.h>

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {

	MSASEnqueuedCommand* _lastEnqueuedCommand;

}

@property (nonatomic,retain) MSASEnqueuedCommand * lastEnqueuedCommand;              //@synthesize lastEnqueuedCommand=_lastEnqueuedCommand - In the implementation block
+(/*^block*/id)calloutBlockForCommand:(id)arg1 ;
-(void)flushQueue;
-(BOOL)hasEnqueuedItems;
-(void)workQueueFlushQueue;
-(void)workQueueEnqueueCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(MSASEnqueuedCommand *)lastEnqueuedCommand;
-(void)setLastEnqueuedCommand:(MSASEnqueuedCommand *)arg1 ;
@end

