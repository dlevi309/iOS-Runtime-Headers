/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(_TVImageView *)chevronView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isEnabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)messageView;
-(void)_processSwipeUpMessageEvent:(int)arg1 ;
@end

