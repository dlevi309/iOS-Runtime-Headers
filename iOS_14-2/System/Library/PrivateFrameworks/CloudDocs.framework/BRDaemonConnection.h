/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)mobileDocumentsURL;
+(id)homeDirectoryURL;
+(id)secondaryConnection;
+(id)syncedRootURLs;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(void)invalidateCachedURLProperties;
+(id)defaultConnection;
-(id)initUsingUserLocalDaemonTokenService;
-(id)initUsingUserLocalDaemon;
-(void)_setupAndResume;
-(id)newSyncTokenProxy;
-(id)newSyncProxy;
@end

