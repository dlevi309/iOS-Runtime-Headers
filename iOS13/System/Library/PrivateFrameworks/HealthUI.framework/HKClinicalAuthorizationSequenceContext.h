/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKClinicalSourceAuthorizationController, NSString, HKSource;

@interface HKClinicalAuthorizationSequenceContext : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;
	NSString* _readUsageDescription;
	HKSource* _source;

}

@property (nonatomic,retain) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) HKSource * source;                                                                //@synthesize source=_source - In the implementation block
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(NSString *)readUsageDescription;
-(void)setAuthorizationController:(HKClinicalSourceAuthorizationController *)arg1 ;
-(HKClinicalSourceAuthorizationController *)authorizationController;
@end

