/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PKSelectActionHeader : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
@end

