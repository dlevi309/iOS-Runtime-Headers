/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDataStreamTransportCommandStatusWrapper, HAPDataStreamTransportParameters, NSData, NSString;

@interface HAPDataStreamTransportSetupResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDataStreamTransportCommandStatusWrapper* _status;
	HAPDataStreamTransportParameters* _parameters;
	NSData* _accessoryKeySalt;

}

@property (nonatomic,retain) HAPDataStreamTransportCommandStatusWrapper * status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) HAPDataStreamTransportParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSData * accessoryKeySalt;                                        //@synthesize accessoryKeySalt=_accessoryKeySalt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(HAPDataStreamTransportParameters *)parameters;
-(void)setParameters:(HAPDataStreamTransportParameters *)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setStatus:(HAPDataStreamTransportCommandStatusWrapper *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HAPDataStreamTransportCommandStatusWrapper *)status;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)accessoryKeySalt;
-(void)setAccessoryKeySalt:(NSData *)arg1 ;
-(id)initWithStatus:(id)arg1 parameters:(id)arg2 accessoryKeySalt:(id)arg3 ;
@end

