/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXVoicemailProviderHostProtocol.h>
#import <libobjc.A.dylib/CXVoicemailProviderVendorProtocol.h>

@protocol CXVoicemailSourceDelegate, OS_dispatch_queue;
@class NSObject, NSString, NSURL;

@interface CXVoicemailSource : NSObject <CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol> {

	BOOL _connected;
	id<CXVoicemailSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<CXVoicemailProviderVendorProtocol> vendorProtocolDelegate; 
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                              //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic,__weak) id<CXVoicemailSourceDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSURL * bundleURL; 
@property (nonatomic,readonly) int processIdentifier; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL permittedToUsePrivateAPI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXVoicemailSourceDelegate>)delegate;
-(void)setDelegate:(id<CXVoicemailSourceDelegate>)arg1 ;
-(NSString *)identifier;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(id)bundle;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(id<CXVoicemailProviderVendorProtocol>)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePrivateAPI;
-(oneway void)actionCompleted:(id)arg1 ;
-(oneway void)commitTransaction:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(oneway void)registerWithConfiguration:(id)arg1 ;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)reportNewVoicemailsWithUpdates:(id)arg1 ;
-(oneway void)reportVoicemailsUpdated:(id)arg1 ;
-(oneway void)reportVoicemailsRemovedWithUUIDs:(id)arg1 ;
@end

