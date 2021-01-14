/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <libobjc.A.dylib/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSArray, NSData, NSString;

@interface FaceTimePushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	NSArray* _topics;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) BOOL registered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
-(void)addListener:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)registered;
-(NSData *)pushToken;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(id)initWithTopics:(id)arg1 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)dealloc;
-(id)copyHandlersForEnumerating;
-(id)_pushTopics;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
@end

