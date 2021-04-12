/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(unsigned long long)operationType;
-(BOOL)isUninstaller;
-(void)setUninstaller:(BOOL)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(NSString *)operationTypeString;
-(void)_invalidate;
-(NSURL *)bundleURL;
-(BOOL)allCallbacksDeleviered;
-(void)_waitForAllCallbackMessagesToExecute;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)callbackDeliveryComplete;
-(void)updateCallbackWithData:(id)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSXPCConnection *)connection;
-(id)progressBlock;
-(NSString *)bundleID;
-(void)setOperationType:(unsigned long long)arg1 ;
-(void)_beginOperation;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

