/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <libobjc.A.dylib/SGDSuggestManagerAllProtocol.h>

@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {

	SGDaemonConnection* _connection;
	BOOL _queuesRequestsIfBusy;

}
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(BOOL)arg2 ;
@end

