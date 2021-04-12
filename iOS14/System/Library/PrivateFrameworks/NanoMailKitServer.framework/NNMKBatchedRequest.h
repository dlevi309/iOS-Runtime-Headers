/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSMutableDictionary, NNMKProtoFetchRequest;

@interface NNMKBatchedRequest : NSObject {

	NSMutableDictionary* _messagesToBeSentInBatch;
	NNMKProtoFetchRequest* _latestFetchRequest;

}

@property (nonatomic,retain) NSMutableDictionary * messagesToBeSentInBatch;              //@synthesize messagesToBeSentInBatch=_messagesToBeSentInBatch - In the implementation block
@property (nonatomic,retain) NNMKProtoFetchRequest * latestFetchRequest;                 //@synthesize latestFetchRequest=_latestFetchRequest - In the implementation block
-(id)init;
-(void)setLatestFetchRequest:(NNMKProtoFetchRequest *)arg1 ;
-(NSMutableDictionary *)messagesToBeSentInBatch;
-(NNMKProtoFetchRequest *)latestFetchRequest;
-(id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2 ;
-(void)setMessagesToBeSentInBatch:(NSMutableDictionary *)arg1 ;
@end

