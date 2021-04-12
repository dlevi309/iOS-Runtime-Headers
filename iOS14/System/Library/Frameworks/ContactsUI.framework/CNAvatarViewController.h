/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarViewController_Private.h>
#import <libobjc.A.dylib/CNAvatarViewController.h>
@class NSArray;


@protocol CNAvatarViewController <NSObject,CNUIObjectViewController>
@property (nonatomic,copy) NSArray * contacts; 
@required
-(id)descriptorForRequiredKeys;
-(void)setContacts:(id)arg1;
-(NSArray *)contacts;
-(id)initWithSettings:(id)arg1;

@end


@protocol CNUIObjectViewControllerDelegate;
@class CNContactStore, PRPersonaStore, NSArray, NSString, UIView;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController> {

	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

}

@property (nonatomic,readonly) id<CNUIPRLikenessResolver> likenessResolver; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (assign,nonatomic,__weak) id<CNAvatarViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
+(Class)defaultImplementation;
-(id)descriptorForRequiredKeys;
-(id)initWithSettings:(id)arg1 ;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

