/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CNContactFormatter, NSString, CNContactPhotoView, NSArray, NSMutableArray, NSDictionary, UILabel, UIView;

@interface CNContactOrbHeaderView : UIView {

	BOOL _centersPhotoAndLabels;
	BOOL _alwaysShowsMonogram;
	CNContactFormatter* _contactFormatter;
	NSString* _alternateName;
	NSString* _message;
	CNContactPhotoView* _photoView;
	NSArray* _contacts;
	NSMutableArray* _headerConstraints;
	NSDictionary* _nameTextAttributes;
	NSDictionary* _taglineTextAttributes;
	UILabel* _nameLabel;
	UILabel* _taglineLabel;
	UILabel* _fakeTaglineAlignmentLabel;
	UIView* _markerView;
	UIEdgeInsets _contentMargins;

}

@property (nonatomic,retain) NSMutableArray * headerConstraints;                 //@synthesize headerConstraints=_headerConstraints - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                 //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                    //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * taglineTextAttributes;                 //@synthesize taglineTextAttributes=_taglineTextAttributes - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * taglineLabel;                             //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (nonatomic,retain) UILabel * fakeTaglineAlignmentLabel;                //@synthesize fakeTaglineAlignmentLabel=_fakeTaglineAlignmentLabel - In the implementation block
@property (nonatomic,retain) UIView * markerView;                                //@synthesize markerView=_markerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargins;                        //@synthesize contentMargins=_contentMargins - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                           //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL centersPhotoAndLabels;                         //@synthesize centersPhotoAndLabels=_centersPhotoAndLabels - In the implementation block
@property (nonatomic,readonly) double photoLabelSpacing; 
@property (nonatomic,readonly) CNContactPhotoView * photoView;                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsMonogram;                           //@synthesize alwaysShowsMonogram=_alwaysShowsMonogram - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)contacts;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)reloadData;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)copy:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(CNContactFormatter *)contactFormatter;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 ;
-(void)updateWithContacts:(id)arg1 ;
-(void)updateFontSizes;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(double)photoLabelSpacing;
-(void)setTaglineTextAttributes:(NSDictionary *)arg1 ;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(id)_headerStringForContacts:(id)arg1 ;
-(id)_taglineStringForContacts:(id)arg1 ;
-(void)handleNameLabelLongPress:(id)arg1 ;
-(void)menuWillHide:(id)arg1 ;
-(UIEdgeInsets)contentMargins;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(BOOL)centersPhotoAndLabels;
-(void)setCentersPhotoAndLabels:(BOOL)arg1 ;
-(CNContactPhotoView *)photoView;
-(BOOL)alwaysShowsMonogram;
-(void)setAlwaysShowsMonogram:(BOOL)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSMutableArray *)headerConstraints;
-(void)setHeaderConstraints:(NSMutableArray *)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(NSDictionary *)taglineTextAttributes;
-(UILabel *)taglineLabel;
-(void)setTaglineLabel:(UILabel *)arg1 ;
-(UILabel *)fakeTaglineAlignmentLabel;
-(void)setFakeTaglineAlignmentLabel:(UILabel *)arg1 ;
-(UIView *)markerView;
-(void)setMarkerView:(UIView *)arg1 ;
@end

