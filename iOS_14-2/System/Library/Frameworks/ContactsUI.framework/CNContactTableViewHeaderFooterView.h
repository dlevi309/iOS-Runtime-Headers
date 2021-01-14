/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSAttributedString, UILabel;

@interface CNContactTableViewHeaderFooterView : UITableViewHeaderFooterView {

	NSAttributedString* _attributedString;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
-(UILabel *)titleLabel;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

