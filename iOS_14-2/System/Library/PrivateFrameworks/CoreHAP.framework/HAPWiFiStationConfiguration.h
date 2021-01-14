/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSString, HAPWiFiSecurityModeWrapper, NSData;

@interface HAPWiFiStationConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	NSString* _SSID;
	HAPWiFiSecurityModeWrapper* _securityMode;
	NSData* _PSK;

}

@property (setter=SID,nonatomic,retain) NSString * SSID;                             //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,retain) HAPWiFiSecurityModeWrapper * securityMode;              //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,retain) NSData * PSK;                                           //@synthesize PSK=_PSK - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(NSString *)SSID;
-(void)setSSID:(NSString *)arg1 ;
-(NSData *)PSK;
-(id)init;
-(void)setSecurityMode:(HAPWiFiSecurityModeWrapper *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setPSK:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HAPWiFiSecurityModeWrapper *)securityMode;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithSSID:(id)arg1 securityMode:(id)arg2 PSK:(id)arg3 ;
@end

