/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

#import <libobjc.A.dylib/SLGLogClientProtocol.h>
#import <libobjc.A.dylib/SLGLogClient.h>

@protocol OS_dispatch_queue, SLGLogClientProtocolDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface SLGLogXPCClient : NSObject <SLGLogClientProtocol, SLGLogClient> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	id<SLGLogClientProtocolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLGLogClientProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SLGLogClientProtocolDelegate>)delegate;
-(void)_handshake;
-(void)setDelegate:(id<SLGLogClientProtocolDelegate>)arg1 ;
-(void)dealloc;
-(void)queryServer:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_connectWithCompletion:(/*^block*/id)arg1 ;
-(void)didReceiveInitialLogMessageFromDomain:(id)arg1 ;
-(void)serverDidReset;
@end

