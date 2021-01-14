/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)suspend;
-(void)setNotifyToken:(int)arg1 ;
-(id)init;
-(id<ATStatusObserverDelegate>)delegate;
-(int)notifyToken;
-(void)setDelegate:(id<ATStatusObserverDelegate>)arg1 ;
-(BOOL)resumed;
-(NSXPCConnection *)connection;
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)updateWithStatus:(id)arg1 ;
-(BOOL)ATCRunning;
-(void)setATCRunning:(BOOL)arg1 ;
-(void)setResumed:(BOOL)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)resume;
@end

