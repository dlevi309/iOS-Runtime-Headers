/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)srcPort;
-(int)dstPort;
-(void)setPayload:(NSData *)arg1 ;
-(NSString *)smscAddress;
-(void)setSrcPort:(int)arg1 ;
-(void)setDstPort:(int)arg1 ;
-(void)setSmscAddress:(NSString *)arg1 ;
-(id)init;
-(int)portAddressingScheme;
-(void)setPortAddressingScheme:(int)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(NSData *)payload;
-(BOOL)isValid;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(NSString *)destinationAddress;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end

