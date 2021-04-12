/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(id)identifier;
-(NSXPCListener *)anonymousListener;
-(id)platform;
-(unsigned long long)connectionType;
-(id)deviceName;
-(id)machServiceName;
-(id)deviceClass;
-(id)errorDomain;
-(id)deviceModel;
-(id)deviceColor;
-(id)deviceEnclosureColor;
-(const char*)loggingSubsystem;
-(id)deviceProductType;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)uniqueDeviceSpecifier;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
@end

