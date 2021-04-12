/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeContextProvider:(id)arg1 ;
-(id)_serverName;
-(void)nothing;
-(void)_startListening;
-(void)startCenter:(id)arg1 ;
-(void)_shutdownServer;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(id)_collateContexts;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)_stopListening;
-(void)dealloc;
@end

