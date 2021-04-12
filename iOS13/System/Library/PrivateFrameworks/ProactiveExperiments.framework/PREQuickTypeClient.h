/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <libobjc.A.dylib/PREQuickTypeProtocol.h>

@class PREXPCClientHelpers;

@interface PREQuickTypeClient : NSObject <PREQuickTypeProtocol> {

	PREXPCClientHelpers* _clientHelpers;

}
+(id)sharedInstance;
-(id)init;
-(id)_remoteObjectProxy;
-(void)proactiveTriggersForContext:(id)arg1 maximumTriggers:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

