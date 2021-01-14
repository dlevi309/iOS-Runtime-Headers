/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

