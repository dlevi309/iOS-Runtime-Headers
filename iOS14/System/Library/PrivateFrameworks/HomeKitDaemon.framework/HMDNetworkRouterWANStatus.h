/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterWANStatus : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _identifier;
	HAPTLVUnsignedNumberValue* _status;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * status;                  //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setStatus:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HAPTLVUnsignedNumberValue *)status;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithIdentifier:(id)arg1 status:(id)arg2 ;
@end

