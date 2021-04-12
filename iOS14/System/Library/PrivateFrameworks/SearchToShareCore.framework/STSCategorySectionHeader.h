/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIButton, NSString;

@interface STSCategorySectionHeader : UIView {

	UILabel* _titleLabel;
	UIButton* _clearButton;
	BOOL _clearButtonHidden;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL clearButtonHidden;              //@synthesize clearButtonHidden=_clearButtonHidden - In the implementation block
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)title;
-(void)setClearButtonHidden:(BOOL)arg1 ;
-(BOOL)clearButtonHidden;
@end

