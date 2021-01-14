/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterClientStatusControlOperation, HMDNetworkRouterClientStatusIdentifierList, NSString;

@interface HMDNetworkRouterClientStatusControl : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterClientStatusControlOperation* _operation;
	HMDNetworkRouterClientStatusIdentifierList* _clientStatusIdentifierList;

}

@property (nonatomic,retain) HMDNetworkRouterClientStatusControlOperation * operation;                             //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterClientStatusIdentifierList * clientStatusIdentifierList;              //@synthesize clientStatusIdentifierList=_clientStatusIdentifierList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setOperation:(HMDNetworkRouterClientStatusControlOperation *)arg1 ;
-(id)init;
-(HMDNetworkRouterClientStatusControlOperation *)operation;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setClientStatusIdentifierList:(HMDNetworkRouterClientStatusIdentifierList *)arg1 ;
-(HMDNetworkRouterClientStatusIdentifierList *)clientStatusIdentifierList;
-(id)initWithOperation:(id)arg1 clientStatusIdentifierList:(id)arg2 ;
@end

