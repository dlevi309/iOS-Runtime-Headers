/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)contactKeysToFetch;
+(id)_createAvatarView;
+(id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
+(id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
+(id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
+(id)sortedAvatarListFromParticipants:(id)arg1 ;
-(id)init;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setup;
-(CNAvatarView *)avatar;
-(void)setAvatar:(CNAvatarView *)arg1 ;
-(void)updateWithContacts:(id)arg1 ;
-(id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setLoadContactsAsynchronously:(BOOL)arg1 ;
-(void)updateWithParticipant:(id)arg1 ;
-(void)didTap;
-(unsigned long long)labelPlacement;
-(void)updateLabel;
-(void)updateAvatarViewWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(BOOL)loadContactsAsynchronously;
-(id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6 ;
-(void)setUpTap;
-(void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
-(void)setLabelPlacement:(unsigned long long)arg1 ;
@end

