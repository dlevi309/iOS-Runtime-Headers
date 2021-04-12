/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNAvatarViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CNUILikenessRendering, NSObjectCNAvatarViewControllerDelegate, CNSchedulerProvider;
@class NSArray, CNContactStore, PRPersonaStore, CNAvatarView, NSString;

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate> {

	BOOL _threeDTouchEnabled;
	NSArray* _contacts;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	id<CNUILikenessRendering> _imageRenderer;
	unsigned long long _style;
	id<NSObject><CNAvatarViewControllerDelegate> _delegate;
	id<CNSchedulerProvider> _schedulerProvider;
	CNAvatarView* _avatarView;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                           //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                           //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,readonly) id<CNUILikenessRendering> imageRenderer;                                 //@synthesize imageRenderer=_imageRenderer - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                               //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                  //@synthesize style=_style - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;                       //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<NSObject><CNAvatarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSObject><CNAvatarViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NSObject><CNAvatarViewControllerDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)contacts;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(id)descriptorForRequiredKeys;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)setContacts:(id)arg1 ;
-(PRPersonaStore *)personaStore;
-(BOOL)isThreeDTouchEnabled;
-(id<CNUILikenessRendering>)imageRenderer;
-(void)didUpdateContentForAvatarView:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

