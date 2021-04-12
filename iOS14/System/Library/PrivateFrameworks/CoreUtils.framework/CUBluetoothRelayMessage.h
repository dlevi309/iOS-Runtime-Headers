/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, NSData;

@interface CUBluetoothRelayMessage : NSObject {

	int _messageType;
	/*^block*/id _completionHandler;
	NSString* _conduitDeviceID;
	NSString* _destinationAddress;
	NSString* _sourceAddress;
	NSData* _messageData;

}

@property (nonatomic,copy) NSString * sourceAddress;                   //@synthesize sourceAddress=_sourceAddress - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * conduitDeviceID;                 //@synthesize conduitDeviceID=_conduitDeviceID - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;              //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSData * messageData;                       //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) int messageType;                          //@synthesize messageType=_messageType - In the implementation block
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setConduitDeviceID:(NSString *)arg1 ;
-(NSString *)conduitDeviceID;
-(id)completionHandler;
-(id)description;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(void)setMessageData:(NSData *)arg1 ;
-(NSString *)sourceAddress;
-(void)setSourceAddress:(NSString *)arg1 ;
-(NSString *)destinationAddress;
-(NSData *)messageData;
@end

