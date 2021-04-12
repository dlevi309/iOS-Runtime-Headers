/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSXPCListener *)listener;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(Protocol *)protocol;
-(void)suspend;
-(NSString *)serviceName;
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSMutableSet *)requiredEntitlements;
-(void)setRequiredEntitlements:(NSMutableSet *)arg1 ;
-(void)addRequiredEntitlement:(id)arg1 ;
-(id)xObj;
-(BOOL)isResumed;
-(void)setIsResumed:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(BOOL)arg5 ;
-(void)setXObj:(id)arg1 ;
@end

