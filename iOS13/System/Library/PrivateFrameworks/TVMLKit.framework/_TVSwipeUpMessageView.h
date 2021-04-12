/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, _TVImageView, UILabel;

@interface _TVSwipeUpMessageView : UIView {

	int _swipeUpMessageState;
	BOOL _enabled;
	NSString* _message;
	_TVImageView* _chevronView;
	UILabel* _messageView;

}

@property (nonatomic,readonly) _TVImageView * chevronView;               //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,readonly) UILabel * messageView;                    //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)chevronView;
-(UILabel *)messageView;
-(void)_processSwipeUpMessageEvent:(int)arg1 ;
@end

