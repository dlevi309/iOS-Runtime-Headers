/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKAlertSession.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/STKUSSDHostCommunication.h>

@class NSXPCListener, NSXPCConnection, NSMutableArray, NSString;

@interface STKUSSDAlertSession : STKAlertSession <NSXPCListenerDelegate, STKUSSDHostCommunication> {

	BOOL _hasReceivedContent;
	long long _event;
	NSXPCListener* _ussdListener;
	NSXPCConnection* _ussdConnection;
	NSMutableArray* _connectionQueue;

}

@property (nonatomic,readonly) NSXPCConnection * ussdConnection;              //@synthesize ussdConnection=_ussdConnection - In the implementation block
@property (nonatomic,readonly) NSMutableArray * connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,readonly) long long event;                               //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSXPCListener * ussdListener;                  //@synthesize ussdListener=_ussdListener - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wakeup;
-(NSMutableArray *)connectionQueue;
-(long long)event;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)invalidate;
-(NSXPCListener *)ussdListener;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 sound:(id)arg5 ;
-(void)performUSSDUpdate:(/*^block*/id)arg1 ;
-(void)setHasReceivedContent:(BOOL)arg1 ;
-(BOOL)hasReceivedContent;
-(NSXPCConnection *)ussdConnection;
@end

