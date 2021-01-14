/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>
#import <libobjc.A.dylib/CRKIDSListener.h>

@class CATRemoteTaskOperation, NSString;

@interface CRKOperationBackedIDSMessageListener : NSObject <CATTaskOperationNotificationDelegate, CRKIDSListener> {

	CATRemoteTaskOperation* _listenOperation;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) CATRemoteTaskOperation * listenOperation;              //@synthesize listenOperation=_listenOperation - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHandler:(id)arg1 ;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
-(id)initWithListenOperation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(CATRemoteTaskOperation *)listenOperation;
@end

