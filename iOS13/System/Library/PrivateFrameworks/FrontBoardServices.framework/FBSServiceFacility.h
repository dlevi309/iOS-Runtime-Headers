/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, FBSSerialQueue, NSSet, NSMutableSet;

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable> {

	NSString* _identifier;
	FBSSerialQueue* _queue;
	NSSet* _prerequisiteMilestones;
	NSMutableSet* _clients;
	NSSet* _clients_immutable;
	os_unfair_lock_s _clients_immutable_lock;
	BOOL _invalidated;

}

@property (nonatomic,readonly) NSSet * _prerequisiteMilestones; 
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) FBSSerialQueue * queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSSet * clients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(FBSSerialQueue *)queue;
-(NSString *)identifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(BOOL)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(NSSet *)_prerequisiteMilestones;
-(NSSet *)clients;
-(BOOL)queue_clientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)queue_clientDidDisconnect:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3 ;
@end

