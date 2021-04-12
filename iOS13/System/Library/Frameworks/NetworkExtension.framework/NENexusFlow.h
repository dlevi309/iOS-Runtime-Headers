/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(nw_protocol*)protocol;
-(NWEndpoint *)endpoint;
-(unsigned long long)state;
-(NENexusFlowManager *)manager;
-(void)setProtocol:(nw_protocol*)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(NWParameters *)parameters;
-(void)setManager:(NENexusFlowManager *)arg1 ;
-(NSUUID *)nexusInstance;
-(NSUUID *)clientIdentifier;
-(void)setupFlowProtocolWithUUID:(id)arg1 ;
-(void)setNexusInstance:(NSUUID *)arg1 ;
@end

