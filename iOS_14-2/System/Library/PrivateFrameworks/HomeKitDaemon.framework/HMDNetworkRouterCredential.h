/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterCredential : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _macAddress;
	NSData* _psk;

}

@property (nonatomic,retain) NSData * macAddress;                   //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) NSData * psk;                          //@synthesize psk=_psk - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(NSData *)psk;
-(id)init;
-(void)setPsk:(NSData *)arg1 ;
-(void)setMacAddress:(NSData *)arg1 ;
-(NSData *)macAddress;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithMacAddress:(id)arg1 psk:(id)arg2 ;
@end

