/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDHealthPlugin.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon;
@class NSString, HDXPCListener;

@interface HDHealthExtensionsPlugin : NSObject <HDXPCListenerDelegate, HDHealthPlugin, HDDiagnosticObject> {

	HDXPCListener* _listener;
	id<HDHealthDaemon> _healthDaemon;

}

@property (nonatomic,__weak,readonly) id<HDHealthDaemon> healthDaemon;              //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
-(void)dealloc;
-(NSString *)pluginIdentifier;
-(void)activate;
-(id)diagnosticDescription;
-(id<HDHealthDaemon>)healthDaemon;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)serverWithClient:(id)arg1 error:(id*)arg2 ;
-(id)initWithHealthDaemon:(id)arg1 ;
@end

