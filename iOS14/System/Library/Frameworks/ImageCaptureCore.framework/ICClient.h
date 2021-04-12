/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(int)pid;
-(id)initWithConnection:(id)arg1 ;
-(void)lock;
-(NSXPCConnection *)connection;
-(NSMutableArray *)notifications;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
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

