/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id<PKSessionDelegate>)delegate;
-(void)setDelegate:(id<PKSessionDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)endSession;
-(DASession *)session;
-(void)setSession:(DASession *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)daSession:(id)arg1 didBecomeActive:(id)arg2 ;
-(void)daSession:(id)arg1 didEnd:(id)arg2 ;
@end

