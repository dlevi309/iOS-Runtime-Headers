/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterIPAddress : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _v4;
	NSData* _v6;

}

@property (nonatomic,retain) NSData * v4;                           //@synthesize v4=_v4 - In the implementation block
@property (nonatomic,retain) NSData * v6;                           //@synthesize v6=_v6 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ipAddressFromNetAddress:(id)arg1 error:(id*)arg2 ;
+(id)ipAddressFromRuleAddress:(id)arg1 allowWildcard:(BOOL)arg2 ;
-(NSData *)v4;
-(NSData *)v6;
-(id)init;
-(void)setV4:(NSData *)arg1 ;
-(void)setV6:(NSData *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithV4:(id)arg1 v6:(id)arg2 ;
@end

