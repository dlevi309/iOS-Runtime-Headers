/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <libobjc.A.dylib/FPDExtensionSessionProtocol.h>

@class NSString;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {

	BOOL hasFileProviderPresenceTCCAccess;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasFileProviderPresenceTCCAccess; 
-(void)invalidate;
-(void)start;
-(void)dumpStateTo:(id)arg1 ;
-(id)newFileProviderProxyWithPID:(int)arg1 ;
-(id)newFileProviderProxyWithoutPID;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg1 ;
-(void)registerLifetimeExtensionForObject:(id)arg1 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg1 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(id)existingFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(BOOL)hasFileProviderPresenceTCCAccess;
-(void)updatePresenceTCCWithAuditToken:(SCD_Struct_FP2)arg1 ;
-(void)setHasFileProviderPresenceTCCAccess:(BOOL)arg1 ;
@end

