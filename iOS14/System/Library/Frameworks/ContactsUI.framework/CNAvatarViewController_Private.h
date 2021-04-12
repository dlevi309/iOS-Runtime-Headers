/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class CNContactStore, PRPersonaStore;


@protocol CNAvatarViewController_Private <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (assign,nonatomic,__weak) id<CNAvatarViewControllerDelegate> delegate; 
@required
-(PRPersonaStore *)personaStore;
-(CNContactStore *)contactStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(BOOL)isThreeDTouchEnabled;
-(id<CNAvatarViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

