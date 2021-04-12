/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <DataAccess/DAMailboxFetchMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@protocol MFRequestQueueResponseConsumerDAMailAccountStreamConsumerFactory;
@class MFDAMessageStore, MFMessage, MFMimePart;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {

	id<MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;
	MFDAMessageStore* store;
	MFMessage* message;
	MFMimePart* part;
	int format;
	BOOL partial;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isUserRequested;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
@end

