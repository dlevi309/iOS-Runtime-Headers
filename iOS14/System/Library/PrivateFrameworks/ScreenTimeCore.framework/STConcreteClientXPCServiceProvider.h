/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/STClientXPCServiceProvider.h>

@protocol STPasscodeProviderService;
@class NSXPCListener, NSXPCInterface, NSString;

@interface STConcreteClientXPCServiceProvider : NSObject <NSXPCListenerDelegate, STClientXPCServiceProvider> {

	NSXPCListener* _activeListener;
	id<STPasscodeProviderService> _providedService;
	NSXPCInterface* _providedServiceInterface;

}

@property (retain) NSXPCListener * activeListener;                             //@synthesize activeListener=_activeListener - In the implementation block
@property (retain) id<STPasscodeProviderService> providedService;              //@synthesize providedService=_providedService - In the implementation block
@property (retain) NSXPCInterface * providedServiceInterface;                  //@synthesize providedServiceInterface=_providedServiceInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)providePasscodeProviderService;
-(void)setActiveListener:(NSXPCListener *)arg1 ;
-(void)setProvidedService:(id<STPasscodeProviderService>)arg1 ;
-(void)setProvidedServiceInterface:(NSXPCInterface *)arg1 ;
-(NSXPCListener *)activeListener;
-(id<STPasscodeProviderService>)providedService;
-(NSXPCInterface *)providedServiceInterface;
@end

