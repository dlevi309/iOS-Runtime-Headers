/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSString, HAPTLVUnsignedNumberValue, NSData;

@interface HAP2TLVThreadNetworkCredentials : NSObject <NSCopying, HAPTLVProtocol> {

	NSString* _networkName;
	HAPTLVUnsignedNumberValue* _channel;
	HAPTLVUnsignedNumberValue* _panID;
	NSData* _extendedPanID;
	NSData* _masterKey;
	HAPTLVUnsignedNumberValue* _reattachPeriod;

}

@property (nonatomic,retain) NSString * networkName;                                  //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * channel;                     //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * panID;                       //@synthesize panID=_panID - In the implementation block
@property (nonatomic,retain) NSData * extendedPanID;                                  //@synthesize extendedPanID=_extendedPanID - In the implementation block
@property (nonatomic,retain) NSData * masterKey;                                      //@synthesize masterKey=_masterKey - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * reattachPeriod;              //@synthesize reattachPeriod=_reattachPeriod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(NSString *)networkName;
-(id)init;
-(void)setNetworkName:(NSString *)arg1 ;
-(HAPTLVUnsignedNumberValue *)panID;
-(void)setChannel:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)channel;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(NSData *)masterKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)extendedPanID;
-(id)initWithNetworkName:(id)arg1 channel:(id)arg2 panID:(id)arg3 extendedPanID:(id)arg4 masterKey:(id)arg5 reattachPeriod:(id)arg6 ;
-(void)setMasterKey:(NSData *)arg1 ;
-(void)setPanID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setExtendedPanID:(NSData *)arg1 ;
-(void)setReattachPeriod:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)reattachPeriod;
@end

