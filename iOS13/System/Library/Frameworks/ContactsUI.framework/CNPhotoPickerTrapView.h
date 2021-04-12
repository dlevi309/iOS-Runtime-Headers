/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray;

@interface CNPhotoPickerTrapView : UIView {

	UILabel* _label;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (retain) NSArray * constraints;                  //@synthesize constraints=_constraints - In the implementation block
-(NSArray *)constraints;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end

