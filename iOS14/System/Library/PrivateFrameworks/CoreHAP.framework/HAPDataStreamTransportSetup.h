/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDataStreamTransportCommandWrapper, HAPDataStreamTransportProtocolWrapper, NSData, NSString;

@interface HAPDataStreamTransportSetup : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDataStreamTransportCommandWrapper* _command;
	HAPDataStreamTransportProtocolWrapper* _transportType;
	NSData* _controllerKeySalt;

}

@property (nonatomic,retain) HAPDataStreamTransportCommandWrapper * command;                     //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) HAPDataStreamTransportProtocolWrapper * transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSData * controllerKeySalt;                                         //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setTransportType:(HAPDataStreamTransportProtocolWrapper *)arg1 ;
-(HAPDataStreamTransportProtocolWrapper *)transportType;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPDataStreamTransportCommandWrapper *)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(HAPDataStreamTransportCommandWrapper *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)controllerKeySalt;
-(id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3 ;
-(void)setControllerKeySalt:(NSData *)arg1 ;
@end

