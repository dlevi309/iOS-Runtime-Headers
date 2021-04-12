/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSXPCConnection, NSMutableArray, NSString;

@interface ICPrefManager : NSObject {

	NSXPCConnection* _authConnection;
	os_unfair_lock_s _authConnectionLock;
	NSMutableArray* _authConnectionSemaphores;
	NSString* _controlAuthStatus;
	NSString* _contentsAuthStatus;

}

@property (nonatomic,retain) NSXPCConnection * authConnection;              //@synthesize authConnection=_authConnection - In the implementation block
+(id)defaultAuthManager;
-(id)init;
-(void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(BOOL)arg3 ;
-(void)dealloc;
-(void)startQuery:(id)arg1 ;
-(BOOL)openRemoteAuthenticationManager;
-(id)getContentsAuthorizationStatus;
-(id)getControlAuthorizationStatus;
-(BOOL)getGoodNewsStatus;
-(NSXPCConnection *)authConnection;
-(id)authManagerConnection;
-(void)setAuthConnection:(NSXPCConnection *)arg1 ;
-(void)invalidateQueries;
-(void)requestContentsAuthorizationShouldPrompt:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)endQuery:(id)arg1 ;
-(id)remoteAuthManager;
-(void)requestControlAuthorizationShouldPrompt:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

