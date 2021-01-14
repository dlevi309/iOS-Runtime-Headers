/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNAvatarViewController.h>
#import <libobjc.A.dylib/_CNAvatarViewDelegate.h>

@protocol CNUIPRLikenessResolver;
@class NSArray, CNContactStore, PRPersonaStore, _CNAvatarView, NSString;

@interface CNAvatarViewController_NewAvatarView : CNAvatarViewController <_CNAvatarViewDelegate> {

	BOOL _threeDTouchEnabled;
	BOOL _animated;
	NSArray* _contacts;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	id<CNUIPRLikenessResolver> _likenessResolver;
	_CNAvatarView* _avatarView;
	NSArray* _likenessProviders;

}

@property (assign,nonatomic,__weak) _CNAvatarView * avatarView;                                //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) NSArray * likenessProviders;                                      //@synthesize likenessProviders=_likenessProviders - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                  //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,readonly) id<CNUIPRLikenessResolver> likenessResolver;                    //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;              //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (assign,nonatomic) BOOL animated;                                                    //@synthesize animated=_animated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)defaultThreeDTouchSupport;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(BOOL)animated;
-(id)descriptorForRequiredKeys;
-(void)setContacts:(id)arg1 ;
-(PRPersonaStore *)personaStore;
-(CNContactStore *)contactStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(id)contacts;
-(BOOL)isThreeDTouchEnabled;
-(id)initWithSettings:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(_CNAvatarView *)avatarView;
-(void)setLikenessProviders:(NSArray *)arg1 ;
-(NSArray *)likenessProviders;
-(void)setAvatarView:(_CNAvatarView *)arg1 ;
-(void)loadView;
@end

