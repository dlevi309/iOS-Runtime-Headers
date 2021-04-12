/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)disconnect;
-(NSString *)localizedAppName;
-(NSString *)appName;
-(NSString *)extensionIdentifier;
-(NSString *)appIdentifier;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)getMainAppContextPathWithCompletion:(/*^block*/id)arg1 ;
-(void)updateDescendantsOfContextPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

