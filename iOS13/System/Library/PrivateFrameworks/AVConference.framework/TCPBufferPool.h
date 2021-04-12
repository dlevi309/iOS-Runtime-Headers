/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface TCPBufferPool : NSObject {

	int poolSize;
	tagBufferNode* head;
	tagBufferNode* tail;
	tagBufferNode* avail;
	int poolLock;

}
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)monitorBufferPool;
-(char*)getBufferFromPool:(int)arg1 ;
-(void)returnBufferToPool:(char*)arg1 ;
@end

