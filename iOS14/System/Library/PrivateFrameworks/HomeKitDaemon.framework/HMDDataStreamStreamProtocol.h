/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamProtocol.h>

@protocol HMDDataStreamProtocolDelegate;
@class NSMapTable, NSString;

@interface HMDDataStreamStreamProtocol : NSObject <HMFLogging, HMDDataStreamProtocol> {

	NSMapTable* _sockets;
	id<HMDDataStreamProtocolDelegate> _dataStream;

}

@property (readonly) NSMapTable * sockets;                                             //@synthesize sockets=_sockets - In the implementation block
@property (__weak,readonly) id<HMDDataStreamProtocolDelegate> dataStream;              //@synthesize dataStream=_dataStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)logCategory;
+(id)protocolName;
-(BOOL)isActive;
-(id<HMDDataStreamProtocolDelegate>)dataStream;
-(NSMapTable *)sockets;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStreamDidClose:(id)arg1 ;
-(void)dataStreamDidOpen:(id)arg1 ;
-(id)initWithDataStream:(id)arg1 ;
-(void)registerSocket:(id)arg1 ;
-(void)sendData:(id)arg1 socket:(id)arg2 ;
-(void)unregisterSocket:(id)arg1 ;
-(void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)arg1 ;
-(void)_closeAllSocketsWithError:(id)arg1 ;
@end

