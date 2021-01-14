/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NPSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)initialize;
+(BOOL)supportsWatch;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(BOOL)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(BOOL)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 ;
-(id)connection;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 ;
-(void)invalidate;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 cloudEnabled:(BOOL)arg5 ;
-(void)unsafe_invalidate;
-(void)dealloc;
@end

