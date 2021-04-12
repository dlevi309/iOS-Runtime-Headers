/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

