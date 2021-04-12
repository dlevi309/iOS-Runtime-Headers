/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSXPCConnection, NSMutableArray;

@interface ICClient : NSObject {

	os_unfair_lock_s _resourceLock;
	BOOL _openSession;
	BOOL _forwardPTPEvents;
	NSXPCConnection* _connection;
	NSMutableArray* _notifications;
	unsigned long long _objectHandle;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) NSMutableArray * notifications;                    //@synthesize notifications=_notifications - In the implementation block
@property (readonly) int pid; 
@property (assign) BOOL openSession;                                    //@synthesize openSession=_openSession - In the implementation block
@property (assign) unsigned long long objectHandle;                     //@synthesize objectHandle=_objectHandle - In the implementation block
@property (assign) BOOL forwardPTPEvents;                               //@synthesize forwardPTPEvents=_forwardPTPEvents - In the implementation block
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(int)pid;
-(NSMutableArray *)notifications;
-(unsigned long long)objectHandle;
-(void)setObjectHandle:(unsigned long long)arg1 ;
-(void)addNotifications:(id)arg1 ;
-(void)remNotifications:(id)arg1 ;
-(BOOL)openSession;
-(void)setOpenSession:(BOOL)arg1 ;
-(BOOL)interestedInNotification:(id)arg1 ;
-(BOOL)forwardPTPEvents;
-(void)setForwardPTPEvents:(BOOL)arg1 ;
@end

