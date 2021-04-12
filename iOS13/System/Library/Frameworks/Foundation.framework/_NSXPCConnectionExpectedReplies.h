/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionExpectedReplies : NSObject {

	CFDictionaryRef _replyTable;
	opaque_pthread_mutex_t _lock;
	unsigned long long _sequence;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)sequenceForProgress:(id)arg1 ;
-(void)removeProgressSequence:(unsigned long long)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
@end

