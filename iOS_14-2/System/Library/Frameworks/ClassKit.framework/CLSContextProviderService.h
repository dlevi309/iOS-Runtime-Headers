/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSExtension, NSUUID, CLSContextProviderExtensionHostContext, CLSContextProviderExtensionContext, NSArray, NSString;

@interface CLSContextProviderService : NSObject {

	NSObject*<OS_dispatch_queue> _serviceConnectionQueue;
	NSExtension* _extension;
	NSUUID* _sessionUUID;
	CLSContextProviderExtensionHostContext* _extensionHostContext;
	CLSContextProviderExtensionContext* _extensionContext;
	NSArray* _mainAppContextPath;
	Ai _connectionCount;
	NSString* _extensionIdentifier;
	NSString* _appIdentifier;
	NSString* _appName;
	NSString* _localizedAppName;

}

@property (nonatomic,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appIdentifier;                    //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appName;                          //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSString * localizedAppName;                 //@synthesize localizedAppName=_localizedAppName - In the implementation block
-(void)disconnect;
-(NSString *)appIdentifier;
-(id)init;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(id)description;
-(NSString *)extensionIdentifier;
-(NSString *)localizedAppName;
-(NSString *)appName;
-(void)getMainAppContextPathWithCompletion:(/*^block*/id)arg1 ;
-(void)updateDescendantsOfContextPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

