/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/DMFConfigurationSourceClientInterface.h>

@protocol DMFConfigurationSourceClientDelegate, OS_dispatch_queue, OS_dispatch_source;
@class DMFReportingRequirements, DMFConnection, NSXPCListener, NSXPCConnection, NSObject, NSString, CATOperationQueue;

@interface DMFConfigurationSourceClient : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface> {

	DMFReportingRequirements* _reportingRequirements;
	id<DMFConfigurationSourceClientDelegate> _delegate;
	unsigned long long _state;
	DMFConnection* _connection;
	NSXPCListener* _listener;
	NSXPCConnection* _incomingConnection;
	NSObject* _reportingRequirementsLock;
	NSString* _configurationSourceName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CATOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _registerConfigurationSource;

}

@property (assign) unsigned long long state;                                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) DMFConnection * connection;                                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * incomingConnection;                                   //@synthesize incomingConnection=_incomingConnection - In the implementation block
@property (nonatomic,retain) NSObject * reportingRequirementsLock;                                   //@synthesize reportingRequirementsLock=_reportingRequirementsLock - In the implementation block
@property (nonatomic,copy) NSString * configurationSourceName;                                       //@synthesize configurationSourceName=_configurationSourceName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                                        //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                               //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) CATOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> registerConfigurationSource;              //@synthesize registerConfigurationSource=_registerConfigurationSource - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (assign,nonatomic,__weak) id<DMFConfigurationSourceClientDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) DMFReportingRequirements * reportingRequirements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setOfActiveRestrictionUUIDs;
+(id)activeRestrictionsURL;
-(NSString *)organizationIdentifier;
-(void)setOperationQueue:(CATOperationQueue *)arg1 ;
-(void)eventsReportingOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CATOperationQueue *)operationQueue;
-(BOOL)isInvalid;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)enqueueOperationToResolveAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<DMFConfigurationSourceClientDelegate>)delegate;
-(id)initWithConnection:(id)arg1 organizationIdentifier:(id)arg2 displayName:(id)arg3 localMachServiceName:(id)arg4 ;
-(void)probe:(/*^block*/id)arg1 ;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(NSString *)debugDescription;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setRegisterConfigurationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)enqueueOperationToReportStatusChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetResolutionOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)machServiceName;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)name;
-(NSXPCConnection *)incomingConnection;
-(void)setDelegate:(id<DMFConfigurationSourceClientDelegate>)arg1 ;
-(NSString *)configurationSourceName;
-(NSString *)description;
-(NSXPCListener *)listener;
-(id)machService;
-(void)registerConfigurationSourceIfNeeded;
-(NSObject*<OS_dispatch_source>)registerConfigurationSource;
-(NSObject *)reportingRequirementsLock;
-(DMFConnection *)connection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setConfigurationSourceName:(NSString *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)invalidate;
-(void)registrationOperationDidFinish:(id)arg1 ;
-(void)configurationEngineRequestedAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIncomingConnection:(NSXPCConnection *)arg1 ;
-(void)statusReportingOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setReportingRequirementsLock:(NSObject *)arg1 ;
-(id)stateDescription;
-(void)configurationStatusDidChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConnection:(DMFConnection *)arg1 ;
-(DMFReportingRequirements *)reportingRequirements;
-(void)configurationEventsDidChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resume;
-(void)dealloc;
-(void)enqueueOperationToReportEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

