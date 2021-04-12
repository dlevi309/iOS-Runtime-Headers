/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)countLabel;
-(unsigned long long)value;
@end

