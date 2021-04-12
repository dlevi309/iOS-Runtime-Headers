/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterClientStatusControlOperation, HMDNetworkRouterClientStatusIdentifierList, NSString;

@interface HMDNetworkRouterClientStatusControl : NSObject <NSCopying, HMDTLVProtocol> {

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterClientStatusControlOperation *)operation;
-(void)setOperation:(HMDNetworkRouterClientStatusControlOperation *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setClientStatusIdentifierList:(HMDNetworkRouterClientStatusIdentifierList *)arg1 ;
-(HMDNetworkRouterClientStatusIdentifierList *)clientStatusIdentifierList;
-(id)initWithOperation:(id)arg1 clientStatusIdentifierList:(id)arg2 ;
@end

