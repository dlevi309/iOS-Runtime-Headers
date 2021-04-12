/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(unsigned long long)connectionType;
-(id)errorDomain;
-(const char*)loggingSubsystem;
-(id)machServiceName;
-(NSXPCListener *)anonymousListener;
-(id)identifier;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
@end

