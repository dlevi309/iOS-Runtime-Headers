/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)remove:(id)arg1 ;
-(void)put:(id)arg1 ;
-(id)take;
-(void)clear;
-(id)peekAt:(unsigned long long)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(BOOL)waitOnTake;
-(id)peek;
-(void)setWaitOnTake:(BOOL)arg1 ;
-(BOOL)isEmpty;
-(void)dealloc;
@end

