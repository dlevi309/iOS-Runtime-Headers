/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@class FLFollowUpController, NSString;

@interface SUSFollowUpController : NSObject {

	FLFollowUpController* _followUpController;
	NSString* _identifier;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(id)sharedController;
-(BOOL)isAutoUpdateFollowUpCurrentlyBeingPresented;
-(id)init;
-(BOOL)isFollowUpCurrentlyBeingPresented;
-(id)getCurrentSUSFollowUpItem;
-(BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
-(FLFollowUpController *)followUpController;
-(void)SUSFollowUpControllerUnbadgeSettings;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(void)dismissFollowUp;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)postFollowUp:(id)arg1 ;
-(void)dismissBadgeOnlyFollowUp;
-(void)dismissAutoUpdateFollowUp;
-(void)SUSFollowUpControllerBadgeSettings;
-(void)dealloc;
@end

