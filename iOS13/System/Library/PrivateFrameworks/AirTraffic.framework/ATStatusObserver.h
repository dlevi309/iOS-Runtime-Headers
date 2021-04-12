/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/ATStatusObserverProtocol.h>

@protocol ATStatusObserverDelegate;
@class NSXPCConnection, NSString;

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol> {

	BOOL _ATCRunning;
	BOOL _resumed;
	int _notifyToken;
	id<ATStatusObserverDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL ATCRunning;                                           //@synthesize ATCRunning=_ATCRunning - In the implementation block
@property (assign,nonatomic) BOOL resumed;                                              //@synthesize resumed=_resumed - In the implementation block
@property (assign,nonatomic) int notifyToken;                                           //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<ATStatusObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)notifyToken;
-(id<ATStatusObserverDelegate>)delegate;
-(void)setDelegate:(id<ATStatusObserverDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)resumed;
-(void)setNotifyToken:(int)arg1 ;
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)updateWithStatus:(id)arg1 ;
-(BOOL)ATCRunning;
-(void)setATCRunning:(BOOL)arg1 ;
-(void)setResumed:(BOOL)arg1 ;
@end

