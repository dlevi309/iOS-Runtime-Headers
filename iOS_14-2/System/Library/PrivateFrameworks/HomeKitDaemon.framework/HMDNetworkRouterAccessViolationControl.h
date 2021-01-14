/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterAccessViolationControlOperation, HMDNetworkRouterClientIdentifierList, NSString;

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterAccessViolationControlOperation* _operation;
	HMDNetworkRouterClientIdentifierList* _clientIdentifierList;

}

@property (nonatomic,retain) HMDNetworkRouterAccessViolationControlOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterClientIdentifierList * clientIdentifierList;              //@synthesize clientIdentifierList=_clientIdentifierList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setOperation:(HMDNetworkRouterAccessViolationControlOperation *)arg1 ;
-(id)init;
-(HMDNetworkRouterAccessViolationControlOperation *)operation;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setClientIdentifierList:(HMDNetworkRouterClientIdentifierList *)arg1 ;
-(HMDNetworkRouterClientIdentifierList *)clientIdentifierList;
-(id)initWithOperation:(id)arg1 clientIdentifierList:(id)arg2 ;
@end

