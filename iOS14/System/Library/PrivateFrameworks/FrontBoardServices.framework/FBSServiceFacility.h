/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)clients;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2 ;
-(void)queue_clientDidDisconnect:(id)arg1 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(BOOL)queue_clientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)queue_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(NSSet *)_prerequisiteMilestones;
-(void)invalidate;
-(FBSSerialQueue *)queue;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

