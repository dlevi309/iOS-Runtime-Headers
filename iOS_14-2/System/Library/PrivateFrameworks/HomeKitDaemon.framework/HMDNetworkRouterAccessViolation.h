/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _clientIdentifier;
	HAPTLVUnsignedNumberValue* _lastViolationTimestamp;
	HAPTLVUnsignedNumberValue* _lastResetTimestamp;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * lastViolationTimestamp;              //@synthesize lastViolationTimestamp=_lastViolationTimestamp - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * lastResetTimestamp;                  //@synthesize lastResetTimestamp=_lastResetTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setClientIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPTLVUnsignedNumberValue *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLastViolationTimestamp:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setLastResetTimestamp:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)lastViolationTimestamp;
-(HAPTLVUnsignedNumberValue *)lastResetTimestamp;
-(id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3 ;
@end

