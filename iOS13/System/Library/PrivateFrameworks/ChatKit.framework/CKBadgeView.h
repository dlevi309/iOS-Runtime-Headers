/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface CKBadgeView : UIView {

	unsigned long long _value;
	UILabel* _countLabel;

}

@property (nonatomic,readonly) UILabel * countLabel;                //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(unsigned long long)value;
-(void)setValue:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)countLabel;
@end

