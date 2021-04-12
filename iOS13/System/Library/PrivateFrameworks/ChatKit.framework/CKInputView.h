/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIInputView.h>

@interface CKInputView : UIInputView {

	long long _lastContentSizeInterfaceOrientation;
	CGSize _lastContentSize;

}

@property (assign,nonatomic) CGSize lastContentSize;                                     //@synthesize lastContentSize=_lastContentSize - In the implementation block
@property (assign,nonatomic) long long lastContentSizeInterfaceOrientation;              //@synthesize lastContentSizeInterfaceOrientation=_lastContentSizeInterfaceOrientation - In the implementation block
+(CGSize)defaultContentSize;
+(CGSize)defaultContentSizeLargerThanKeyboard:(BOOL*)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)lastContentSize;
-(long long)lastContentSizeInterfaceOrientation;
-(void)setLastContentSize:(CGSize)arg1 ;
-(void)setLastContentSizeInterfaceOrientation:(long long)arg1 ;
@end

