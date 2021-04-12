/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)prepareForReuse;
-(NSAttributedString *)attributedString;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

