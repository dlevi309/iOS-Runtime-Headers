/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class CNContactStore, PRPersonaStore;


@protocol CNAvatarViewController_Private <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (assign,nonatomic,__weak) id<CNAvatarViewControllerDelegate> delegate; 
@required
-(id<CNAvatarViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CNContactStore *)contactStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(PRPersonaStore *)personaStore;
-(BOOL)isThreeDTouchEnabled;

@end

