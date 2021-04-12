/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSXPCConnection, NSSet;

@interface CRCarPlayAppBlacklist : NSObject {

	NSXPCConnection* _connection;
	NSSet* _blacklistedBundleIDs;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * blacklistedBundleIDs;              //@synthesize blacklistedBundleIDs=_blacklistedBundleIDs - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setBlacklistedBundleIDs:(NSSet *)arg1 ;
-(NSSet *)blacklistedBundleIDs;
-(void)_setupConnection;
-(id)_blacklistPreference;
-(void)_requestBlacklistUpdate;
-(BOOL)containsBundleIdentifier:(id)arg1 ;
@end

