/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <libobjc.A.dylib/FPDExtensionSessionProtocol.h>

@class NSString;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {

	BOOL hasFileProviderPresenceTCCAccess;

}

@property (assign,nonatomic) BOOL hasFileProviderPresenceTCCAccess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)registerLifetimeExtensionForObject:(id)arg1 ;
-(void)updatePresenceTCCWithAuditToken:(SCD_Struct_FP0)arg1 ;
-(BOOL)hasFileProviderPresenceTCCAccess;
-(void)setHasFileProviderPresenceTCCAccess:(BOOL)arg1 ;
-(id)newFileProviderProxyWithPID:(int)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg1 ;
-(id)newFileProviderProxyWithoutPID;
-(void)invalidate;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1 ;
-(id)existingFileProviderProxyWithTimeout:(BOOL)arg1 onlyAlreadyLifetimeExtended:(BOOL)arg2 pid:(int)arg3 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg1 ;
@end

