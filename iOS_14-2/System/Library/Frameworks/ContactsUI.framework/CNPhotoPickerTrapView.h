/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

