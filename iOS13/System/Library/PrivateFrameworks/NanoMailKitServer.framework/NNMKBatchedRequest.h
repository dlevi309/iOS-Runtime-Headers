/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

