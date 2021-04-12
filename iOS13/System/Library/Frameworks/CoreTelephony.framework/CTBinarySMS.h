/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@class NSData, NSString, CTXPCServiceSubscriptionContext;

@interface CTBinarySMS : NSObject {

	int _portAddressingScheme;
	int _srcPort;
	int _dstPort;
	NSData* _payload;
	NSString* _destinationAddress;
	NSString* _smscAddress;
	CTXPCServiceSubscriptionContext* _context;

}

@property (assign,nonatomic) int portAddressingScheme;                             //@synthesize portAddressingScheme=_portAddressingScheme - In the implementation block
@property (assign,nonatomic) int srcPort;                                          //@synthesize srcPort=_srcPort - In the implementation block
@property (assign,nonatomic) int dstPort;                                          //@synthesize dstPort=_dstPort - In the implementation block
@property (nonatomic,copy) NSData * payload;                                       //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;                          //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSString * smscAddress;                                 //@synthesize smscAddress=_smscAddress - In the implementation block
@property (nonatomic,copy) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(CTXPCServiceSubscriptionContext *)context;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(int)srcPort;
-(int)dstPort;
-(int)portAddressingScheme;
-(NSString *)destinationAddress;
-(NSString *)smscAddress;
-(void)setPortAddressingScheme:(int)arg1 ;
-(void)setSrcPort:(int)arg1 ;
-(void)setDstPort:(int)arg1 ;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(void)setSmscAddress:(NSString *)arg1 ;
@end

