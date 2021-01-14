/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFBufferedQueue.h>

@class MFDAMailbox, MFDAMessageStore, MFMailMessageLibrary, MFActivityMonitor, MFError;

@interface _MFDAMSBasicConsumer : MFBufferedQueue {

	MFDAMailbox* mailbox;
	MFDAMessageStore* store;
	MFMailMessageLibrary* library;
	MFActivityMonitor* monitor;
	MFError* error;
	unsigned long long numNewMessages;

}

@property (nonatomic,retain) MFActivityMonitor * monitor; 
@property (nonatomic,retain) MFError * error; 
-(MFActivityMonitor *)monitor;
-(void)setError:(MFError *)arg1 ;
-(MFError *)error;
-(void)setMonitor:(MFActivityMonitor *)arg1 ;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(void)dealloc;
@end

