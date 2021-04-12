/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class IMNickname;

@interface CKNicknameAlertHeaderViewController : UIViewController {

	IMNickname* _nickname;

}

@property (nonatomic,retain) IMNickname * nickname;              //@synthesize nickname=_nickname - In the implementation block
-(IMNickname *)nickname;
-(void)setNickname:(IMNickname *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(CGSize)_expectedSize;
-(id)initWithNickname:(id)arg1 ;
@end

