/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <AppSupportUI/NUITableViewContainerCell.h>

@class UITextField, UIImageView, NSArray, NSDictionary;

@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell {

	BOOL _showsChevron;
	UITextField* _textField;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UITextField * textField;                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                    //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (assign,nonatomic) BOOL showsChevron;                        //@synthesize showsChevron=_showsChevron - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
+(id)cellIdentifier;
+(Class)containerViewClass;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(UIImageView *)chevron;
-(void)setTextField:(UITextField *)arg1 ;
-(void)prepareForReuse;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setupTextFields;
-(id)newTextField;
-(void)updateMargins;
-(void)setShowsChevron:(BOOL)arg1 ;
-(BOOL)showsChevron;
-(UITextField *)textField;
-(void)setChevron:(UIImageView *)arg1 ;
-(NSArray *)textFields;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

