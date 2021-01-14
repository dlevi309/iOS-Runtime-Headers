/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


#import <Catalyst/Catalyst-Structs.h>
@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject {

	CATRemoteConnection* mConnection;
	AB mHasResponded;
	id _trust;

}

@property (readonly) id trust;              //@synthesize trust=_trust - In the implementation block
-(id)trust;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 trust:(SecTrustRef)arg2 ;
-(void)respondWithDecisionToAllowUntrustedConnection:(BOOL)arg1 ;
@end

