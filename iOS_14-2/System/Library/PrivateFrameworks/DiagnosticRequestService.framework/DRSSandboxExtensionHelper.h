/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@class NSString;

@interface DRSSandboxExtensionHelper : NSObject {

	BOOL _didInit;
	long long _sandboxExtensionHandle;
	NSString* _logPath;

}

@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,readonly) BOOL didInit;                                //@synthesize didInit=_didInit - In the implementation block
@property (nonatomic,readonly) NSString * logPath;                          //@synthesize logPath=_logPath - In the implementation block
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(BOOL)didInit;
-(long long)sandboxExtensionHandle;
-(NSString *)logPath;
-(void)dealloc;
-(id)initWithSandboxExtensionToken:(id)arg1 logPath:(id)arg2 errorOut:(id*)arg3 ;
@end

