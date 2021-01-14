/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/DASessionDelegate.h>
#import <libobjc.A.dylib/PKSession.h>

@protocol PKSessionDelegate;
@class DASession, NSString;

@interface PKDASession : NSObject <DASessionDelegate, PKSession> {

	DASession* _session;
	AI _sessionState;
	unsigned long long _state;
	id<PKSessionDelegate> _delegate;

}

@property (nonatomic,retain) DASession * session;                                //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PKSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKSessionDelegate>)delegate;
-(DASession *)session;
-(void)setDelegate:(id<PKSessionDelegate>)arg1 ;
-(NSString *)description;
-(void)daSession:(id)arg1 didEnd:(id)arg2 ;
-(void)daSession:(id)arg1 didBecomeActive:(id)arg2 ;
-(void)setSession:(DASession *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)endSession;
-(void)dealloc;
@end

