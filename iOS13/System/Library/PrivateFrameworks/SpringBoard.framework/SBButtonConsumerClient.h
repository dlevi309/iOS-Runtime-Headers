/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol FBSServiceFacilityClientHandle;
@class NSMutableSet;

@interface SBButtonConsumerClient : NSObject {

	BOOL _entitledToConsumeButtonsInBackground;
	BOOL _application;
	BOOL _runningVisible;
	BOOL _suspended;
	id<FBSServiceFacilityClientHandle> _systemServiceClient;
	NSMutableSet* _registrations;

}

@property (nonatomic,retain) id<FBSServiceFacilityClientHandle> systemServiceClient;                                               //@synthesize systemServiceClient=_systemServiceClient - In the implementation block
@property (assign,getter=isEntitledToConsumeButtonsInBackground,nonatomic) BOOL entitledToConsumeButtonsInBackground;              //@synthesize entitledToConsumeButtonsInBackground=_entitledToConsumeButtonsInBackground - In the implementation block
@property (assign,getter=isApplication,nonatomic) BOOL application;                                                                //@synthesize application=_application - In the implementation block
@property (assign,getter=isRunningVisible,nonatomic) BOOL runningVisible;                                                          //@synthesize runningVisible=_runningVisible - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                                                    //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) BOOL canReceiveEvents; 
@property (nonatomic,retain) NSMutableSet * registrations;                                                                         //@synthesize registrations=_registrations - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(BOOL)canReceiveEvents;
-(void)setApplication:(BOOL)arg1 ;
-(BOOL)isApplication;
-(NSMutableSet *)registrations;
-(void)setRegistrations:(NSMutableSet *)arg1 ;
-(id<FBSServiceFacilityClientHandle>)systemServiceClient;
-(void)setSystemServiceClient:(id<FBSServiceFacilityClientHandle>)arg1 ;
-(BOOL)isEntitledToConsumeButtonsInBackground;
-(void)setEntitledToConsumeButtonsInBackground:(BOOL)arg1 ;
-(BOOL)isRunningVisible;
-(void)setRunningVisible:(BOOL)arg1 ;
@end

