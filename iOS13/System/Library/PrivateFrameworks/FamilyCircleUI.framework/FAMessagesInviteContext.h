/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class NSString, NSURL, NSArray;

@interface FAMessagesInviteContext : NSObject {

	BOOL _canEditRecipients;
	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSURL* _imageURL;
	NSURL* _inviteURL;
	NSString* _overlaidTextColorString;
	NSArray* _invitees;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSURL * inviteURL;                               //@synthesize inviteURL=_inviteURL - In the implementation block
@property (nonatomic,copy) NSString * overlaidTextColorString;              //@synthesize overlaidTextColorString=_overlaidTextColorString - In the implementation block
@property (nonatomic,copy) NSArray * invitees;                              //@synthesize invitees=_invitees - In the implementation block
@property (assign,nonatomic) BOOL canEditRecipients;                        //@synthesize canEditRecipients=_canEditRecipients - In the implementation block
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)action;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(id)initWithResults:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(NSString *)overlaidTextColorString;
-(NSURL *)inviteURL;
-(NSArray *)invitees;
-(BOOL)canEditRecipients;
-(void)_parseResultsDictionary:(id)arg1 ;
-(void)setInviteURL:(NSURL *)arg1 ;
-(void)setOverlaidTextColorString:(NSString *)arg1 ;
-(void)setInvitees:(NSArray *)arg1 ;
@end

