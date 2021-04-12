/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <libobjc.A.dylib/CLLocationSmootherClientInterface.h>

@protocol OS_dispatch_queue, CLLocationSmootherDelegate;
@class NSObject, NSXPCConnection, CLLocationSmoother, NSString;

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	id<CLLocationSmootherDelegate> _delegate;
	CLLocationSmoother* _locationManagerSmoother;

}

@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationSmootherDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationSmoother * locationManagerSmoother;              //@synthesize locationManagerSmoother=_locationManagerSmoother - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CLLocationSmootherDelegate>)delegate;
-(void)setDelegate:(id<CLLocationSmootherDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)createConnection;
-(void)setLocationManagerSmoother:(CLLocationSmoother *)arg1 ;
-(CLLocationSmoother *)locationManagerSmoother;
-(void)didSmoothLocations:(id)arg1 ofType:(id)arg2 ;
-(id)initWithCLLocationSmoother:(id)arg1 ;
@end

