/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <libobjc.A.dylib/CLLocationManagerRoutineClientInterface.h>

@protocol OS_dispatch_queue, CLLocationManagerDelegate;
@class NSObject, NSXPCConnection, CLLocationManagerRoutine, NSString;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _updating;
	NSXPCConnection* _connection;
	id<CLLocationManagerDelegate> _delegate;
	CLLocationManagerRoutine* _locationManagerRoutine;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationManagerRoutine * locationManagerRoutine;              //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                  //@synthesize updating=_updating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateLocations:(id)arg1 ;
-(void)createConnection;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(BOOL)updating;
-(void)setUpdating:(BOOL)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 locationManagerRoutine:(id)arg2 ;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

