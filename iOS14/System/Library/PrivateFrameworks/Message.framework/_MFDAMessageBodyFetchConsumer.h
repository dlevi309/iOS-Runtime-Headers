/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFRequestQueueResponseConsumer.h>
#import <libobjc.A.dylib/DAMailAccountStreamConsumerFactory.h>

@protocol MFDAStreamingContentConsumer;
@class MFError, NSData, NSString;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> {

	id<MFDAStreamingContentConsumer> _streamConsumer;
	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	BOOL _hasLocalCopyOfData;

}

@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                             //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasLocalCopyOfData;                                      //@synthesize hasLocalCopyOfData=_hasLocalCopyOfData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)succeeded;
-(void)setError:(MFError *)arg1 ;
-(MFError *)error;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(id)streamingContentConsumer;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(BOOL)hasLocalCopyOfData;
-(BOOL)wantsData;
-(void)setHasLocalCopyOfData:(BOOL)arg1 ;
@end

