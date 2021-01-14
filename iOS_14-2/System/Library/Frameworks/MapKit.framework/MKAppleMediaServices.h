/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class NSXPCConnection, NSObject;

@interface MKAppleMediaServices : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)appStoreAppWithIdentifiers:(id)arg1 artworkSize:(CGSize)arg2 screenScale:(double)arg3 type:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)appStoreAppWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 artworkSize:(CGSize)arg3 screenScale:(double)arg4 type:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)appStoreAppWithBundleIdentifiers:(id)arg1 artworkSize:(CGSize)arg2 screenScale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)mediaResultWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 artworkSize:(CGSize)arg3 screenScale:(double)arg4 type:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)openConnectionIfNeeded;
-(void)appStoreAppWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appStoreAppWithBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

