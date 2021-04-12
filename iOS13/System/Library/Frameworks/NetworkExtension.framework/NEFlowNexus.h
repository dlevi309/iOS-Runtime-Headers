/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NENexus.h>

@protocol OS_dispatch_queue;
@class NEFlowDivertFileHandle, NSObject, NSData, NWRemoteConnectionDirector, NSMutableSet;

@interface NEFlowNexus : NENexus {

	BOOL _supportsBrowseRequests;
	unsigned _flowDivertControlUnit;
	NEFlowDirectorRef _flowDivertDirector;
	NEFlowDivertFileHandle* _flowDivertControl;
	NSObject*<OS_dispatch_queue> _flowDivertQueue;
	NSData* _flowDivertTokenHMACKey;
	NWRemoteConnectionDirector* _connectionDirector;
	NSMutableSet* _browseAssertions;

}

@property (assign) NEFlowDirectorRef flowDivertDirector;                         //@synthesize flowDivertDirector=_flowDivertDirector - In the implementation block
@property (retain) NEFlowDivertFileHandle * flowDivertControl;                   //@synthesize flowDivertControl=_flowDivertControl - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> flowDivertQueue;                 //@synthesize flowDivertQueue=_flowDivertQueue - In the implementation block
@property (assign) unsigned flowDivertControlUnit;                               //@synthesize flowDivertControlUnit=_flowDivertControlUnit - In the implementation block
@property (retain) NSData * flowDivertTokenHMACKey;                              //@synthesize flowDivertTokenHMACKey=_flowDivertTokenHMACKey - In the implementation block
@property (retain) NWRemoteConnectionDirector * connectionDirector;              //@synthesize connectionDirector=_connectionDirector - In the implementation block
@property (retain) NSMutableSet * browseAssertions;                              //@synthesize browseAssertions=_browseAssertions - In the implementation block
@property (assign,nonatomic) BOOL supportsBrowseRequests;                        //@synthesize supportsBrowseRequests=_supportsBrowseRequests - In the implementation block
-(void)dealloc;
-(BOOL)supportsBrowseRequests;
-(BOOL)setDiscoveredEndpoints:(id)arg1 forClient:(id)arg2 ;
-(unsigned)flowDivertControlUnit;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setupFlowDivertDirector;
-(BOOL)setupFlowDivertPolicies;
-(NEFlowDirectorRef)flowDivertDirector;
-(void)setFlowDivertDirector:(NEFlowDirectorRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)flowDivertQueue;
-(NEFlowDivertFileHandle *)flowDivertControl;
-(void)setFlowDivertQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlowDivertControl:(NEFlowDivertFileHandle *)arg1 ;
-(void)setFlowDivertControlUnit:(unsigned)arg1 ;
-(void)setFlowDivertTokenHMACKey:(NSData *)arg1 ;
-(BOOL)installFlowDivertRules;
-(void)setConnectionDirector:(NWRemoteConnectionDirector *)arg1 ;
-(NWRemoteConnectionDirector *)connectionDirector;
-(void)setSupportsBrowseRequests:(BOOL)arg1 ;
-(NSMutableSet *)browseAssertions;
-(void)handleAssertFromClient:(id)arg1 ;
-(void)handleUnassertFromClient:(id)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)setRemoteConnectionDirector:(id)arg1 ;
-(void)connectNewFlow:(id)arg1 ;
-(void)disconnectFlow:(id)arg1 ;
-(NSData *)flowDivertTokenHMACKey;
-(void)setBrowseAssertions:(NSMutableSet *)arg1 ;
@end

