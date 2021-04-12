/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSUUID, NENexusFlowManager, NWEndpoint, NWParameters;

@interface NENexusFlow : NSObject {

	unsigned long long _state;
	nw_protocol* _protocol;
	NSUUID* _nexusInstance;
	NENexusFlowManager* _manager;

}

@property (retain) NSUUID * nexusInstance;                             //@synthesize nexusInstance=_nexusInstance - In the implementation block
@property (assign,nonatomic) nw_protocol* protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (__weak) NENexusFlowManager * manager;                       //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NSUUID * clientIdentifier; 
-(void)setProtocol:(nw_protocol*)arg1 ;
-(NWParameters *)parameters;
-(NSUUID *)nexusInstance;
-(void)setNexusInstance:(NSUUID *)arg1 ;
-(nw_protocol*)protocol;
-(void)setManager:(NENexusFlowManager *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)setState:(unsigned long long)arg1 ;
-(NENexusFlowManager *)manager;
-(unsigned long long)state;
-(NSUUID *)clientIdentifier;
-(void)setupFlowProtocolWithUUID:(id)arg1 ;
-(void)dealloc;
@end

