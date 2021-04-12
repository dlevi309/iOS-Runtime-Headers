/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsUI/CNAvatarView.h>

@class UIViewController, NSString;

@interface CKAvatarView : CNAvatarView {

	UIViewController* _presentingViewController;
	NSString* _preferredHandle;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) NSString * preferredHandle;                                    //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (setter=_ck_setContextToken:,nonatomic,retain) NSString * _ck_contextToken; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_ck_setContextToken:(id)arg1 ;
-(NSString *)preferredHandle;
-(void)setPreferredHandle:(NSString *)arg1 ;
-(NSString *)_ck_contextToken;
-(void)setHighlighted:(BOOL)arg1 ;
@end

