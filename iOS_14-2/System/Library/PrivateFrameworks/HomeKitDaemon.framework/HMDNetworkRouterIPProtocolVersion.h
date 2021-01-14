/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSString;

@interface HMDNetworkRouterIPProtocolVersion : NSObject <NSCopying, HAPTLVProtocol> {

	long long _protocol;

}

@property (assign,nonatomic) long long protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)protocolFromIPProtocolVersion:(unsigned char)arg1 ;
-(void)setProtocol:(long long)arg1 ;
-(id)init;
-(long long)protocol;
-(NSString *)description;
-(id)initWithProtocol:(long long)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
@end

