/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <libobjc.A.dylib/PRProtobufClientProtocol.h>

@protocol PRLiveProtobufStreamDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSUUID, NSObject, NSString;

@interface PRLiveProtobufStream : NSObject <PRProtobufClientProtocol> {

	NSXPCConnection* _conn;
	NSUUID* _uniqueId;
	id<PRLiveProtobufStreamDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<PRLiveProtobufStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PRLiveProtobufStreamDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<PRLiveProtobufStreamDelegate>)arg1 ;
-(id)server;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)invalidate;
-(void)consumeProtobufBytes:(id)arg1 ;
-(void)getUniqueClientIdentifier:(/*^block*/id)arg1 ;
@end

