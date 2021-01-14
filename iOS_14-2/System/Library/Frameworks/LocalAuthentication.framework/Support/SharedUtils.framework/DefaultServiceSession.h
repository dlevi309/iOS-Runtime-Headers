/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

#import <libobjc.A.dylib/ServiceSession.h>

@protocol Service;
@class NSUUID, NSString;

@interface DefaultServiceSession : NSObject <ServiceSession> {

	id<Service> _service;
	NSString* _serviceType;
	NSString* _clientID;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) NSUUID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) id<Service> service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)clientID;
-(NSUUID *)sessionID;
-(NSString *)serviceType;
-(id<Service>)service;
-(void)dealloc;
-(id)initWithService:(id)arg1 serviceType:(id)arg2 client:(id)arg3 ;
@end

