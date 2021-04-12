/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
*/

#import <libobjc.A.dylib/AirPlayControllerAsync.h>
#import <libobjc.A.dylib/AirPlayControllerSync.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCConnection;

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _xpcName;
	NSXPCConnection* _cnx;

}

@property (nonatomic,copy) NSString * xpcName;              //@synthesize xpcName=_xpcName - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_setupConnection;
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 ;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3 ;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 ;
-(NSString *)xpcName;
-(void)setXpcName:(NSString *)arg1 ;
@end

