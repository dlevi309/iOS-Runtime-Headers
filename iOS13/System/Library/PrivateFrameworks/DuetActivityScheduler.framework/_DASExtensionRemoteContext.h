/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_DASRemoteExtensionContextProtocol.h>

@protocol OS_os_log;
@class NSObject, _DASExtension, NSString;

@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol> {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (readonly) _DASExtension * extension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)extensionRunnerClassWhitelist;
-(id)init;
-(void)suspend;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(_DASExtension *)extension;
-(id)hostContextWithError:(id*)arg1 ;
-(void)performActivity:(id)arg1 ;
-(id)createExtensionRunnerWithClassName:(id)arg1 ;
@end

