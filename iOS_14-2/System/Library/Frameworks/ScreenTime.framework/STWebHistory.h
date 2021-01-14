/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
*/


@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject {

	NSString* _bundleIdentifier;
	NSXPCConnection* _xpcConnection;

}

@property (copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(NSXPCConnection *)xpcConnection;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)deleteAllHistory;
-(NSString *)bundleIdentifier;
-(void)deleteHistoryForURL:(id)arg1 ;
-(void)deleteHistoryDuringInterval:(id)arg1 ;
@end

