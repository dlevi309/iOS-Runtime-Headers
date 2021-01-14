/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/


@class NSDictionary, FMServerInteractionController;

@interface FMFSADataSource : NSObject {

	NSDictionary* _mockLocations;
	FMServerInteractionController* _serverInteractionController;

}

@property (nonatomic,retain) FMServerInteractionController * serverInteractionController;              //@synthesize serverInteractionController=_serverInteractionController - In the implementation block
+(id)dataSource;
-(id)init;
-(FMServerInteractionController *)serverInteractionController;
-(void)setServerInteractionController:(FMServerInteractionController *)arg1 ;
-(void)search:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setVisibility:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_punchOutToHandle:(id)arg1 ;
-(void)loadMockLocationData;
-(void)dataLoaded:(id)arg1 ;
-(void)setGeoFence:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)punchOutFriend:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

