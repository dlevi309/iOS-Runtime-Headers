/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageFetchAttachmentConsumer.h>

@class MFProgressFilterDataConsumer, MFActivityMonitor;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {

	MFProgressFilterDataConsumer* _progressFilter;
	unsigned long long _expectedLength;
	unsigned long long _accumulatedLength;
	MFActivityMonitor* _monitor;
	BOOL _dataWasBase64;
	BOOL _fetchSucceeded;

}

@property (nonatomic,retain) MFProgressFilterDataConsumer * progressFilter;              //@synthesize progressFilter=_progressFilter - In the implementation block
@property (assign,nonatomic) unsigned long long expectedLength;                          //@synthesize expectedLength=_expectedLength - In the implementation block
@property (readonly) BOOL dataWasBase64;                                                 //@synthesize dataWasBase64=_dataWasBase64 - In the implementation block
@property (readonly) BOOL fetchSucceeded;                                                //@synthesize fetchSucceeded=_fetchSucceeded - In the implementation block
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)setProgressFilter:(MFProgressFilterDataConsumer *)arg1 ;
-(BOOL)fetchSucceeded;
-(BOOL)dataWasBase64;
-(MFProgressFilterDataConsumer *)progressFilter;
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4 ;
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6 ;
@end

