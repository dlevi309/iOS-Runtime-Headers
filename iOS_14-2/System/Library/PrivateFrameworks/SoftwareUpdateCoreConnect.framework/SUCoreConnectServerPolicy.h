/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
*/

#import <libobjc.A.dylib/SUCoreConnectPolicyProtocolPrivate.h>
#import <libobjc.A.dylib/SUCoreConnectPolicyProtocol.h>

@protocol SUCoreConnectServerDelegate, OS_dispatch_queue;
@class NSString, NSSet, NSObject;

@interface SUCoreConnectServerPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol> {

	NSString* _serviceName;
	NSSet* _entitlements;
	id<SUCoreConnectServerDelegate> _serverDelegate;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain,readonly) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain,readonly) NSSet * entitlements;                                        //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,__weak,readonly) id<SUCoreConnectServerDelegate> serverDelegate;              //@synthesize serverDelegate=_serverDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> connectionQueue;                //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_getWhitelistedClassesForKey:(id)arg1 ;
+(void)setWhitelistedClasses:(id)arg1 forKey:(id)arg2 ;
+(id)getWhitelistedClassesForKey:(id)arg1 ;
+(void)setWhitelistedClass:(Class)arg1 forKey:(id)arg2 ;
+(void)clearWhitelistedClasses;
+(id)_getSharedServerAccessQueue;
+(id)_getSharedServerWhitelistedClasses;
-(NSSet *)entitlements;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSString *)serviceName;
-(id<SUCoreConnectServerDelegate>)serverDelegate;
-(id)initWithServiceName:(id)arg1 entitlements:(id)arg2 serverDelegate:(id)arg3 ;
@end

