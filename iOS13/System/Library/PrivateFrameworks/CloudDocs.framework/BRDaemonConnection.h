/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)homeDirectoryURL;
+(id)defaultConnection;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)mobileDocumentsURL;
+(id)secondaryConnection;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)syncedRootURLs;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(void)invalidateCachedURLProperties;
-(id)initUsingUserLocalDaemonTokenService;
-(id)newSyncTokenProxy;
-(id)newSyncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end

