/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <libobjc.A.dylib/SGDSuggestManagerAllProtocol.h>

@protocol SGDSuggestManagerAllProtocol;
@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {

	SGDaemonConnection* _connection;
	id<SGDSuggestManagerAllProtocol> _inProcessSuggestManager;
	BOOL _queuesRequestsIfBusy;

}
-(id)initWithInProcessSuggestManager:(id)arg1 ;
-(id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end

