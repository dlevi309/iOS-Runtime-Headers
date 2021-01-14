/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSString, NSURL, UIImage;

@interface GKGameSharingInfo : NSObject {

	BOOL _complete;
	NSString* _gameName;
	NSString* _developerName;
	NSURL* _viewItemURL;
	NSURL* _shortViewItemURL;
	UIImage* _iconImage;
	NSString* _emailSubject;
	NSString* _emailBody;

}

@property (nonatomic,retain) NSString * gameName;                   //@synthesize gameName=_gameName - In the implementation block
@property (nonatomic,retain) NSString * developerName;              //@synthesize developerName=_developerName - In the implementation block
@property (nonatomic,retain) NSURL * viewItemURL;                   //@synthesize viewItemURL=_viewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * shortViewItemURL;              //@synthesize shortViewItemURL=_shortViewItemURL - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                   //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * emailSubject;               //@synthesize emailSubject=_emailSubject - In the implementation block
@property (nonatomic,retain) NSString * emailBody;                  //@synthesize emailBody=_emailBody - In the implementation block
@property (assign,nonatomic) BOOL complete;                         //@synthesize complete=_complete - In the implementation block
-(UIImage *)iconImage;
-(NSString *)developerName;
-(void)setDeveloperName:(NSString *)arg1 ;
-(void)setEmailSubject:(NSString *)arg1 ;
-(void)setEmailBody:(NSString *)arg1 ;
-(void)setGameName:(NSString *)arg1 ;
-(void)setViewItemURL:(NSURL *)arg1 ;
-(NSURL *)shortViewItemURL;
-(void)setShortViewItemURL:(NSURL *)arg1 ;
-(NSString *)emailBody;
-(NSString *)emailSubject;
-(id)initWithGame:(id)arg1 ;
-(id)operationThatBlocksUntilLoaded;
-(id)thumbnailForActivityType:(id)arg1 ;
-(id)itemsForActivityType:(id)arg1 ;
-(id)subjectForEmailActivity;
-(BOOL)complete;
-(NSString *)gameName;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(NSURL *)viewItemURL;
-(void)dealloc;
@end

