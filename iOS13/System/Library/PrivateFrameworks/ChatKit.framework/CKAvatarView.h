/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsUI/CNAvatarView.h>

@class UIViewController, NSString;

@interface CKAvatarView : CNAvatarView {

	UIViewController* _presentingViewController;
	NSString* _preferredHandle;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) NSString * preferredHandle;                               //@synthesize preferredHandle=_preferredHandle - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setPreferredHandle:(NSString *)arg1 ;
-(NSString *)preferredHandle;
@end

