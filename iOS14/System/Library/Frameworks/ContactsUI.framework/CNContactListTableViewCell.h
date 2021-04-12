/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol CNCancelable;
@class CNContact, CNContactMatchInfo, CNContactFormatter, CNContactListStyleApplier;

@interface CNContactListTableViewCell : UITableViewCell {

	BOOL _isMeCard;
	BOOL _enabled;
	BOOL _isEmergencyContact;
	BOOL _hasBeenDisplayed;
	CNContact* _contact;
	CNContactMatchInfo* _contactMatchInfo;
	CNContactFormatter* _contactFormatter;
	CNContactListStyleApplier* _contactListStyleApplier;
	/*^block*/id _selectedBackgroundViewConfiguration;
	id<CNCancelable> _summaryCancelationToken;

}

@property (nonatomic,retain) id<CNCancelable> summaryCancelationToken;                         //@synthesize summaryCancelationToken=_summaryCancelationToken - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDisplayed;                                            //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactMatchInfo * contactMatchInfo;                            //@synthesize contactMatchInfo=_contactMatchInfo - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                            //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;              //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL isMeCard;                                                    //@synthesize isMeCard=_isMeCard - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyContact;                                          //@synthesize isEmergencyContact=_isEmergencyContact - In the implementation block
@property (nonatomic,copy) id selectedBackgroundViewConfiguration;                             //@synthesize selectedBackgroundViewConfiguration=_selectedBackgroundViewConfiguration - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)enabled;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(void)setSummaryCancelationToken:(id<CNCancelable>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)hasBeenDisplayed;
-(void)setIsMeCard:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(BOOL)isEmergencyContact;
-(void)setContactMatchInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CNContactMatchInfo *)contactMatchInfo;
-(BOOL)isMeCard;
-(void)cancelAsyncOperations;
-(id)selectedBackgroundViewConfiguration;
-(void)setIsEmergencyContact:(BOOL)arg1 ;
-(void)setContactMatchInfo:(CNContactMatchInfo *)arg1 ;
-(void)setSelectedBackgroundViewConfiguration:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<CNCancelable>)summaryCancelationToken;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

