/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableSet, Protocol, NSXPCListener, NSString;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate> {

	BOOL _isResumed;
	id _xObj;
	NSMutableSet* _requiredEntitlements;
	Protocol* _protocol;
	NSXPCListener* _listener;
	NSString* _serviceName;

}

@property (assign,nonatomic) BOOL isResumed;                                   //@synthesize isResumed=_isResumed - In the implementation block
@property (nonatomic,retain) id xObj;                                          //@synthesize xObj=_xObj - In the implementation block
@property (nonatomic,retain) NSMutableSet * requiredEntitlements;              //@synthesize requiredEntitlements=_requiredEntitlements - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProtocol:(Protocol *)arg1 ;
-(id)xObj;
-(void)setIsResumed:(BOOL)arg1 ;
-(void)setXObj:(id)arg1 ;
-(void)addRequiredEntitlement:(id)arg1 ;
-(void)suspend;
-(Protocol *)protocol;
-(id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(BOOL)arg5 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSString *)serviceName;
-(BOOL)isResumed;
-(void)setRequiredEntitlements:(NSMutableSet *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSMutableSet *)requiredEntitlements;
-(void)resume;
@end

