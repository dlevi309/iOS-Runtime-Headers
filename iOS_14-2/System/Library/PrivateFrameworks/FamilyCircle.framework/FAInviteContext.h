/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/


@class NSString, NSURL, NSArray;

@interface FAInviteContext : NSObject {

	BOOL _canEditRecipients;
	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSString* _secondaryTitle;
	NSURL* _imageURL;
	NSURL* _iconURL;
	NSURL* _inviteURL;
	NSString* _overlaidTextColorString;
	NSArray* _invitees;
	NSString* _mailLinkTitle;
	NSString* _mailLinkSubtitle;
	NSString* _mailMessageSubject;
	NSString* _mailMessageBodyHTML;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                                 //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) NSURL * inviteURL;                               //@synthesize inviteURL=_inviteURL - In the implementation block
@property (nonatomic,copy) NSString * overlaidTextColorString;              //@synthesize overlaidTextColorString=_overlaidTextColorString - In the implementation block
@property (nonatomic,copy) NSArray * invitees;                              //@synthesize invitees=_invitees - In the implementation block
@property (assign,nonatomic) BOOL canEditRecipients;                        //@synthesize canEditRecipients=_canEditRecipients - In the implementation block
@property (nonatomic,copy) NSString * mailLinkTitle;                        //@synthesize mailLinkTitle=_mailLinkTitle - In the implementation block
@property (nonatomic,copy) NSString * mailLinkSubtitle;                     //@synthesize mailLinkSubtitle=_mailLinkSubtitle - In the implementation block
@property (nonatomic,copy) NSString * mailMessageSubject;                   //@synthesize mailMessageSubject=_mailMessageSubject - In the implementation block
@property (nonatomic,copy) NSString * mailMessageBodyHTML;                  //@synthesize mailMessageBodyHTML=_mailMessageBodyHTML - In the implementation block
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)description;
-(NSArray *)invitees;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(NSString *)secondaryTitle;
-(NSURL *)imageURL;
-(void)setInvitees:(NSArray *)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(void)_parseResultsDictionary:(id)arg1 ;
-(BOOL)canEditRecipients;
-(void)setInviteURL:(NSURL *)arg1 ;
-(NSString *)overlaidTextColorString;
-(void)setOverlaidTextColorString:(NSString *)arg1 ;
-(NSString *)mailLinkTitle;
-(void)setMailLinkTitle:(NSString *)arg1 ;
-(NSString *)mailLinkSubtitle;
-(void)setMailLinkSubtitle:(NSString *)arg1 ;
-(NSString *)mailMessageSubject;
-(void)setMailMessageSubject:(NSString *)arg1 ;
-(NSString *)mailMessageBodyHTML;
-(void)setMailMessageBodyHTML:(NSString *)arg1 ;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(NSURL *)inviteURL;
-(NSString *)title;
@end

