/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class HRProfile;

@interface HRProfileManager : NSObject {

	 currentProfile;
	 profileCache;
	 countProviderCollectionCache;
	 managerQueue;
	 lock;

}

@property (readonly,nonatomic) HRProfile * primaryProfile; 
@property (retain,nonatomic) HRProfile * currentProfile; 
+(id)sharedInstance;
-(id)init;
-(void)setCurrentProfile:(HRProfile *)arg1 ;
-(id)profileWithHealthStore:(id)arg1 ;
-(id)profileWithProfileIdentifier:(id)arg1 ;
-(void)switchCurrentProfileWithIdentifier:(id)arg1 ;
-(HRProfile *)currentProfile;
-(HRProfile *)primaryProfile;
@end

