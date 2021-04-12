/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
*/


@protocol MobileGestaltHelper;
@class NSXPCConnection;

@interface MobileGestaltHelperProxy : NSObject {

	int _error;
	id<MobileGestaltHelper> _helper;
	NSXPCConnection* _connection;

}

@property (assign) int error;                                     //@synthesize error=_error - In the implementation block
@property (readonly) id<MobileGestaltHelper> helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
+(id)proxy;
-(id<MobileGestaltHelper>)helper;
-(id)init;
-(void)setError:(int)arg1 ;
-(int)error;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(BOOL)proxyRebuildCache;
-(void)dealloc;
@end

