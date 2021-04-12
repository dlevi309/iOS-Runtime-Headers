/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionRequestedReplies : NSObject {

	CFDictionaryRef _replyDictionaryTable;
	CFDictionaryRef _progressTable;
	unsigned long long _requestedReplyCount;
	unsigned char _invalid;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)beginTransactionForSequence:(unsigned long long)arg1 reply:(id)arg2 withProgress:(id)arg3 ;
-(void)endTransactionForSequence:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
@end

