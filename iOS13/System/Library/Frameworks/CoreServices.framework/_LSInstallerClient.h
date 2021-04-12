/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/LSInstallationServiceCallbackProtocol.h>

@protocol OS_dispatch_group;
@class NSString, NSXPCConnection, NSURL, NSDictionary, NSObject;

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {

	BOOL _uninstaller;
	unsigned long long _operationType;
	NSString* _operationTypeString;
	NSXPCConnection* _connection;
	/*^block*/id _progressBlock;
	NSString* _bundleID;
	NSURL* _bundleURL;
	NSDictionary* _options;
	NSObject*<OS_dispatch_group> _callbackDeliveryGroup;
	os_unfair_lock_s _lock;
	BOOL _allCallbacksDeleviered;

}

@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id progressBlock;                                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                  //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long operationType;                   //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationTypeString; 
@property (assign,getter=isUninstaller,nonatomic) BOOL uninstaller;              //@synthesize uninstaller=_uninstaller - In the implementation block
@property (readonly) BOOL allCallbacksDeleviered;                                //@synthesize allCallbacksDeleviered=_allCallbacksDeleviered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
+(id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)_invalidate;
-(NSDictionary *)options;
-(NSURL *)bundleURL;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setUninstaller:(BOOL)arg1 ;
-(BOOL)allCallbacksDeleviered;
-(id)progressBlock;
-(BOOL)isUninstaller;
-(NSString *)operationTypeString;
-(unsigned long long)operationType;
-(NSString *)bundleID;
-(void)setOperationType:(unsigned long long)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_beginOperation;
-(void)setBundleID:(NSString *)arg1 ;
-(void)_waitForAllCallbackMessagesToExecute;
-(void)updateCallbackWithData:(id)arg1 ;
-(void)callbackDeliveryComplete;
@end

