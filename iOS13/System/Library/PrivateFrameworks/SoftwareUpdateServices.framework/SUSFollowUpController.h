/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(FLFollowUpController *)followUpController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(id)getCurrentSUSFollowUpItem;
-(BOOL)isAutoUpdateFollowUpCurrentlyBeingPresented;
-(void)dismissFollowUp;
-(BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
-(void)postFollowUp:(id)arg1 ;
-(void)dismissBadgeOnlyFollowUp;
-(void)dismissAutoUpdateFollowUp;
-(BOOL)isFollowUpCurrentlyBeingPresented;
-(void)SUSFollowUpControllerBadgeSettings;
-(void)SUSFollowUpControllerUnbadgeSettings;
@end

