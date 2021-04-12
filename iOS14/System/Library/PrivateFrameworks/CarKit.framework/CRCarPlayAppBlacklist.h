/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSXPCConnection, NSSet;

@interface CRCarPlayAppBlacklist : NSObject {

	NSXPCConnection* _connection;
	NSSet* _blacklistedBundleIDs;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * blacklistedBundleIDs;              //@synthesize blacklistedBundleIDs=_blacklistedBundleIDs - In the implementation block
-(void)_setupConnection;
-(id)init;
-(NSSet *)blacklistedBundleIDs;
-(NSXPCConnection *)connection;
-(BOOL)containsBundleIdentifier:(id)arg1 ;
-(void)_requestBlacklistUpdate;
-(void)setBlacklistedBundleIDs:(NSSet *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_blacklistPreference;
-(void)dealloc;
@end

