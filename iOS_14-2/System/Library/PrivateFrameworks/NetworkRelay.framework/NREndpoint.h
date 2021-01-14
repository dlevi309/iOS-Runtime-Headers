/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_endpoint;
@class NRDeviceIdentifier, NSString, NWEndpoint, NSObject;

@interface NREndpoint : NSObject <NSCopying> {

	unsigned char _dataProtectionClass;
	NRDeviceIdentifier* _deviceIdentifier;
	NSString* _portString;
	NWEndpoint* _endpoint;
	NSObject*<OS_nw_endpoint> _cEndpoint;

}

@property (nonatomic,retain) NRDeviceIdentifier * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * portString;                              //@synthesize portString=_portString - In the implementation block
@property (assign,nonatomic) unsigned char dataProtectionClass;                  //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,retain) NWEndpoint * endpoint;                              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> cEndpoint;                //@synthesize cEndpoint=_cEndpoint - In the implementation block
-(NRDeviceIdentifier *)deviceIdentifier;
-(void)setDeviceIdentifier:(NRDeviceIdentifier *)arg1 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)endpoint;
-(unsigned char)dataProtectionClass;
-(id)copyEndpoint;
-(void)setDataProtectionClass:(unsigned char)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 portString:(id)arg2 dataProtectionClass:(unsigned char)arg3 ;
-(id)copyNWEndpoint;
-(NSString *)portString;
-(void)setPortString:(NSString *)arg1 ;
-(NSObject*<OS_nw_endpoint>)cEndpoint;
-(void)setCEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
@end

