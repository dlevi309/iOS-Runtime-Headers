/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterAccessViolationControlOperation, HMDNetworkRouterClientIdentifierList, NSString;

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HMDTLVProtocol> {

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterAccessViolationControlOperation *)operation;
-(void)setOperation:(HMDNetworkRouterAccessViolationControlOperation *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setClientIdentifierList:(HMDNetworkRouterClientIdentifierList *)arg1 ;
-(HMDNetworkRouterClientIdentifierList *)clientIdentifierList;
-(id)initWithOperation:(id)arg1 clientIdentifierList:(id)arg2 ;
@end

