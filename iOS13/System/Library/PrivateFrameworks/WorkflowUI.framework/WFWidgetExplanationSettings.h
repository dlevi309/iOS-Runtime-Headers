/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, NSURL;

@interface WFWidgetExplanationSettings : NSObject {

	NSString* _campaignIdentifier;
	NSURL* _videoURL;
	NSString* _navigationBarText;
	NSString* _sloganText;
	NSString* _detailText;
	NSString* _buttonText;
	NSString* _completedSloganText;
	NSString* _completedDetailText;
	NSString* _completedButtonText;

}

@property (nonatomic,copy) NSString * campaignIdentifier;               //@synthesize campaignIdentifier=_campaignIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                          //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSString * navigationBarText;                //@synthesize navigationBarText=_navigationBarText - In the implementation block
@property (nonatomic,copy) NSString * sloganText;                       //@synthesize sloganText=_sloganText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                       //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                       //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSString * completedSloganText;              //@synthesize completedSloganText=_completedSloganText - In the implementation block
@property (nonatomic,copy) NSString * completedDetailText;              //@synthesize completedDetailText=_completedDetailText - In the implementation block
@property (nonatomic,copy) NSString * completedButtonText;              //@synthesize completedButtonText=_completedButtonText - In the implementation block
+(id)defaultSettings;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSString *)campaignIdentifier;
-(void)setCompletedButtonText:(NSString *)arg1 ;
-(void)setCompletedDetailText:(NSString *)arg1 ;
-(void)setCompletedSloganText:(NSString *)arg1 ;
-(void)setSloganText:(NSString *)arg1 ;
-(void)setNavigationBarText:(NSString *)arg1 ;
-(void)setCampaignIdentifier:(NSString *)arg1 ;
-(NSString *)navigationBarText;
-(NSString *)sloganText;
-(NSString *)completedSloganText;
-(NSString *)completedDetailText;
-(NSString *)completedButtonText;
@end

