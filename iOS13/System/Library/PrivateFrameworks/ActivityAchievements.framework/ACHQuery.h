/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/ACHQueryClientInterface.h>

@class NSString;

@interface ACHQuery : HKQuery <ACHQueryClientInterface> {

	/*^block*/id _errorHandler;
	/*^block*/id _initialAchievementsHandler;
	/*^block*/id _newAchievementsHandler;
	/*^block*/id _updatedAchievementsHandler;
	/*^block*/id _removedAchievementsHandler;

}

@property (nonatomic,copy) id initialAchievementsHandler;              //@synthesize initialAchievementsHandler=_initialAchievementsHandler - In the implementation block
@property (nonatomic,copy) id newAchievementsHandler;                  //@synthesize newAchievementsHandler=_newAchievementsHandler - In the implementation block
@property (nonatomic,copy) id updatedAchievementsHandler;              //@synthesize updatedAchievementsHandler=_updatedAchievementsHandler - In the implementation block
@property (nonatomic,copy) id removedAchievementsHandler;              //@synthesize removedAchievementsHandler=_removedAchievementsHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                            //@synthesize errorHandler=_errorHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(BOOL)supportsTaskServers;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(id)initialAchievementsHandler;
-(id)newAchievementsHandler;
-(id)updatedAchievementsHandler;
-(id)removedAchievementsHandler;
-(void)setInitialAchievementsHandler:(id)arg1 ;
-(void)setNewAchievementsHandler:(id)arg1 ;
-(void)setUpdatedAchievementsHandler:(id)arg1 ;
-(void)setRemovedAchievementsHandler:(id)arg1 ;
-(void)client_achievementsDidFinishInitialFetch:(id)arg1 ;
-(void)client_deliverNewAchievements:(id)arg1 ;
-(void)client_deliverUpdatedAchievements:(id)arg1 ;
-(void)client_deliverRemovedAchievements:(id)arg1 ;
-(id)initWithInitialAchievementsHandler:(/*^block*/id)arg1 newAchievementsHandler:(/*^block*/id)arg2 updatedAchievementsHandler:(/*^block*/id)arg3 removedAchievementsHandler:(/*^block*/id)arg4 ;
@end

