/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIViewController, CNAvatarView, CNContact;

@interface EKUILabeledAvatarView : UIView {

	BOOL _loadContactsAsynchronously;
	UILabel* _label;
	UIViewController* _viewController;
	CNAvatarView* _avatar;
	unsigned long long _labelPlacement;
	unsigned long long _options;

}

@property (retain) CNAvatarView * avatar;                                  //@synthesize avatar=_avatar - In the implementation block
@property (retain) UILabel * label;                                        //@synthesize label=_label - In the implementation block
@property (assign) unsigned long long labelPlacement;                      //@synthesize labelPlacement=_labelPlacement - In the implementation block
@property (assign) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (retain) CNContact * contact; 
@property (__weak) UIViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL loadContactsAsynchronously;              //@synthesize loadContactsAsynchronously=_loadContactsAsynchronously - In the implementation block
+(id)_createAvatarView;
+(id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
+(id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
+(id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
+(id)contactForContact:(id)arg1 ;
+(id)sortedAvatarListFromParticipants:(id)arg1 ;
+(id)contactKeysToFetch;
-(void)setup;
-(void)setViewController:(UIViewController *)arg1 ;
-(unsigned long long)labelPlacement;
-(void)updateAvatarViewWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(BOOL)loadContactsAsynchronously;
-(id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6 ;
-(void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(void)setLabelPlacement:(unsigned long long)arg1 ;
-(CNAvatarView *)avatar;
-(void)didTap;
-(id)init;
-(void)updateWithContacts:(id)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)updateLabel;
-(UIViewController *)viewController;
-(void)setAvatar:(CNAvatarView *)arg1 ;
-(void)setUpTap;
-(id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setLoadContactsAsynchronously:(BOOL)arg1 ;
-(void)updateWithParticipant:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

