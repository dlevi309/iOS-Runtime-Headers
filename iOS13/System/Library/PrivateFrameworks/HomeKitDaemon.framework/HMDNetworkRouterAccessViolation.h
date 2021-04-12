/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HMDTLVProtocol> {

	HMDTLVUnsignedNumberValue* _clientIdentifier;
	HMDTLVUnsignedNumberValue* _lastViolationTimestamp;
	HMDTLVUnsignedNumberValue* _lastResetTimestamp;

}

@property (nonatomic,retain) HMDTLVUnsignedNumberValue * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * lastViolationTimestamp;              //@synthesize lastViolationTimestamp=_lastViolationTimestamp - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * lastResetTimestamp;                  //@synthesize lastResetTimestamp=_lastResetTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientIdentifier:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)clientIdentifier;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLastViolationTimestamp:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setLastResetTimestamp:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)lastViolationTimestamp;
-(HMDTLVUnsignedNumberValue *)lastResetTimestamp;
-(id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3 ;
@end

