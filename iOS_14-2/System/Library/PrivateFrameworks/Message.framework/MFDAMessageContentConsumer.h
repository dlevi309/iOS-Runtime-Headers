/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFDAStreamingContentConsumer.h>

@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;
@class NSMutableData, DAMailMessage, NSString;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {

	int _requestedFormat;
	id<MFCollectingDataConsumer> _dataConsumer;
	id<MFCollectingDataConsumer> _alternatePartConsumer;
	id<MFMessageDataConsumerFactory> _consumerFactory;
	BOOL _triedCreatingAlternatePartConsumer;
	BOOL _didBeginStreaming;
	BOOL _succeeded;
	NSMutableData* _bodyData;
	double _timeOfLastActivity;
	DAMailMessage* _message;

}

@property (assign,nonatomic) int requestedFormat;                                             //@synthesize requestedFormat=_requestedFormat - In the implementation block
@property (nonatomic,retain) id<MFCollectingDataConsumer> dataConsumer;                       //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,retain) id<MFCollectingDataConsumer> alternatePartConsumer;              //@synthesize alternatePartConsumer=_alternatePartConsumer - In the implementation block
@property (nonatomic,retain) id<MFMessageDataConsumerFactory> consumerFactory;                //@synthesize consumerFactory=_consumerFactory - In the implementation block
@property (nonatomic,readonly) DAMailMessage * message;                                       //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSMutableData * bodyData;                                      //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) double timeOfLastActivity;                                     //@synthesize timeOfLastActivity=_timeOfLastActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DAMailMessage *)message;
-(BOOL)succeeded;
-(void)setDataConsumer:(id<MFCollectingDataConsumer>)arg1 ;
-(id)data;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(id<MFMessageDataConsumerFactory>)consumerFactory;
-(id)dataConsumerForPart:(id)arg1 ;
-(void)setAlternatePartConsumer:(id<MFCollectingDataConsumer>)arg1 ;
-(NSMutableData *)bodyData;
-(id<MFCollectingDataConsumer>)alternatePartConsumer;
-(BOOL)didBeginStreaming;
-(double)timeOfLastActivity;
-(void)setConsumerFactory:(id<MFMessageDataConsumerFactory>)arg1 ;
-(int)requestedFormat;
-(void)setRequestedFormat:(int)arg1 ;
-(id<MFCollectingDataConsumer>)dataConsumer;
@end

