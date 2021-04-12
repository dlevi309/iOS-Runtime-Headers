/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(id)init;
-(void)dealloc;
-(void)_startListening;
-(void)_stopListening;
-(void)removeContextProvider:(id)arg1 ;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_serverName;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
@end

