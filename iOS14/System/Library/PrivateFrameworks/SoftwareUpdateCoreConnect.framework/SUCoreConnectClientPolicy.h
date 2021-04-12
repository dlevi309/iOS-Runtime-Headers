/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
*/

#import <libobjc.A.dylib/SUCoreConnectPolicyProtocolPrivate.h>
#import <libobjc.A.dylib/SUCoreConnectPolicyProtocol.h>

@protocol SUCoreConnectClientDelegate;
@class NSString;

@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol> {

	NSString* _serviceName;
	id<SUCoreConnectClientDelegate> _clientDelegate;
	NSString* _clientID;

}

@property (nonatomic,retain,readonly) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,__weak,readonly) id<SUCoreConnectClientDelegate> clientDelegate;              //@synthesize clientDelegate=_clientDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_getSharedClientAccessQueue;
+(id)_getSharedClientWhitelistedClasses;
+(id)_getWhitelistedClassesForKey:(id)arg1 ;
+(void)setWhitelistedClasses:(id)arg1 forKey:(id)arg2 ;
+(id)getWhitelistedClassesForKey:(id)arg1 ;
+(void)setWhitelistedClass:(Class)arg1 forKey:(id)arg2 ;
+(void)clearWhitelistedClasses;
-(NSString *)clientID;
-(NSString *)serviceName;
-(id<SUCoreConnectClientDelegate>)clientDelegate;
-(id)initForServiceName:(id)arg1 delegate:(id)arg2 clientID:(id)arg3 ;
-(id)initForServiceName:(id)arg1 delegate:(id)arg2 ;
@end

