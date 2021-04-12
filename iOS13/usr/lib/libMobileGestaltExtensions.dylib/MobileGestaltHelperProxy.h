/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(int)error;
-(void)setError:(int)arg1 ;
-(NSXPCConnection *)connection;
-(id<MobileGestaltHelper>)helper;
-(BOOL)proxyRebuildCache;
@end

