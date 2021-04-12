/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
+(id)newNode;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)clear;
-(BOOL)isEmpty;
-(BOOL)remove:(id)arg1 ;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned long long)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(BOOL)waitOnTake;
-(void)setWaitOnTake:(BOOL)arg1 ;
@end

