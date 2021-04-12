/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarViewController_Private.h>
#import <libobjc.A.dylib/CNAvatarViewController.h>
@class NSArray;


@protocol CNAvatarViewController <NSObject,CNUIObjectViewController>
@property (nonatomic,copy) NSArray * contacts; 
@required
-(id)initWithSettings:(id)arg1;
-(NSArray *)contacts;
-(id)descriptorForRequiredKeys;
-(void)setContacts:(id)arg1;

@end


@protocol CNUIObjectViewControllerDelegate;
@class CNContactStore, PRPersonaStore, NSArray, NSString, UIView;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController> {

	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

}

@property (nonatomic,readonly) id<CNUIPRLikenessResolver> likenessResolver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (assign,nonatomic,__weak) id<CNAvatarViewControllerDelegate> delegate; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
@property (nonatomic,copy) NSArray * contacts; 
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
+(Class)defaultImplementation;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)descriptorForRequiredKeys;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
@end

