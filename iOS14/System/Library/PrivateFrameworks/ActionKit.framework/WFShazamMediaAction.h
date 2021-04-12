/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/SHSessionDelegate.h>

@class SHSession, SHAudioMatchingRemoteStore, NSString;

@interface WFShazamMediaAction : WFAction <SHSessionDelegate> {

	SHSession* _session;
	SHAudioMatchingRemoteStore* _store;

}

@property (nonatomic,retain) SHSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) SHAudioMatchingRemoteStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userInterfaceProtocol;
-(void)setStore:(SHAudioMatchingRemoteStore *)arg1 ;
-(SHAudioMatchingRemoteStore *)store;
-(SHSession *)session;
-(void)setSession:(SHSession *)arg1 ;
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 didFindMatch:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)startShazam;
-(void)finishRunningWithMatch:(id)arg1 error:(id)arg2 ;
@end

