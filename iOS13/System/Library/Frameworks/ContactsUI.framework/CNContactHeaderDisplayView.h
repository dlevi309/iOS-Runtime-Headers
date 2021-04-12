/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactHeaderView.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CNUIReusableView.h>

@class NSDictionary, CNContactFormatter, NSString, UIView, UILabel, CNContactDowntimeView, NSLayoutConstraint, CNContactGeminiView, CNGeminiResult, CNGeminiPickerController;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNPickerControllerDelegate, UINavigationControllerDelegate, CNUIReusableView> {

	NSDictionary* _taglineTextAttributes;
	NSDictionary* _downtimeTextAttributes;
	NSDictionary* _geminiTextAttributes;
	BOOL _shouldShowGemini;
	BOOL _isEmergencyContact;
	BOOL _allowsPickerActions;
	CNContactFormatter* _contactFormatter;
	NSDictionary* _importantTextAttributes;
	NSString* _alternateName;
	NSString* _message;
	NSString* _importantMessage;
	UIView* _personHeaderView;
	UILabel* _taglineLabel;
	UILabel* _importantLabel;
	CNContactDowntimeView* _downtimeView;
	double _minLabelsHeight;
	double _maxLabelsHeight;
	NSLayoutConstraint* _avatarNameSpacingConstraint;
	CNContactGeminiView* _geminiView;
	CNGeminiResult* _geminiResult;
	CNGeminiPickerController* _geminiPicker;

}

@property (nonatomic,retain) UIView * personHeaderView;                            //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (retain) UILabel * taglineLabel;                                         //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (nonatomic,retain) UILabel * importantLabel;                             //@synthesize importantLabel=_importantLabel - In the implementation block
@property (nonatomic,retain) CNContactDowntimeView * downtimeView;                 //@synthesize downtimeView=_downtimeView - In the implementation block
@property (assign,nonatomic) double minLabelsHeight;                               //@synthesize minLabelsHeight=_minLabelsHeight - In the implementation block
@property (assign,nonatomic) double maxLabelsHeight;                               //@synthesize maxLabelsHeight=_maxLabelsHeight - In the implementation block
@property (retain) NSLayoutConstraint * avatarNameSpacingConstraint;               //@synthesize avatarNameSpacingConstraint=_avatarNameSpacingConstraint - In the implementation block
@property (retain) CNContactGeminiView * geminiView;                               //@synthesize geminiView=_geminiView - In the implementation block
@property (retain) CNGeminiResult * geminiResult;                                  //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,retain) CNGeminiPickerController * geminiPicker;              //@synthesize geminiPicker=_geminiPicker - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGemini;                                //@synthesize shouldShowGemini=_shouldShowGemini - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,copy) NSDictionary * taglineTextAttributes; 
@property (nonatomic,copy) NSDictionary * importantTextAttributes;                 //@synthesize importantTextAttributes=_importantTextAttributes - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                             //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * importantMessage;                          //@synthesize importantMessage=_importantMessage - In the implementation block
@property (assign,nonatomic) unsigned long long avatarStyle; 
@property (assign,nonatomic) BOOL isEmergencyContact;                              //@synthesize isEmergencyContact=_isEmergencyContact - In the implementation block
@property (assign,nonatomic) BOOL allowsPickerActions;                             //@synthesize allowsPickerActions=_allowsPickerActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 monogramOnly:(BOOL)arg4 ;
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg1 ;
+(id)contactHeaderViewWithContact:(id)arg1 monogramOnly:(BOOL)arg2 delegate:(id)arg3 ;
+(id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(double)minHeight;
-(double)maxHeight;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(id)descriptorForRequiredKeys;
-(CNContactFormatter *)contactFormatter;
-(void)updateFontSizes;
-(void)setTaglineTextAttributes:(NSDictionary *)arg1 ;
-(void)setNameTextAttributes:(id)arg1 ;
-(id)_headerStringForContacts:(id)arg1 ;
-(id)_taglineStringForContacts:(id)arg1 ;
-(void)handleNameLabelLongPress:(id)arg1 ;
-(void)menuWillHide:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(NSDictionary *)taglineTextAttributes;
-(UILabel *)taglineLabel;
-(void)setTaglineLabel:(UILabel *)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(BOOL)shouldShowGemini;
-(void)setShouldShowGemini:(BOOL)arg1 ;
-(double)defaultMaxHeight;
-(void)calculateLabelSizesIfNeeded;
-(void)updateSizeDependentAttributes;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowImageDrops:(BOOL)arg4 monogramOnly:(BOOL)arg5 delegate:(id)arg6 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
-(void)createGeminiViewIfNeeded;
-(void)setAvatarStyle:(unsigned long long)arg1 ;
-(unsigned long long)avatarStyle;
-(void)setImportantMessage:(NSString *)arg1 ;
-(void)setIsEmergencyContact:(BOOL)arg1 ;
-(void)disablePhotoTapGesture;
-(void)calculateLabelSizes;
-(void)setImportantTextAttributes:(NSDictionary *)arg1 ;
-(void)setDowntimeTextAttributes:(id)arg1 ;
-(id)downtimeTextAttributes;
-(void)setGeminiTextAttributes:(id)arg1 ;
-(id)geminiTextAttributes;
-(void)_updatePhotoView;
-(void)_updateImportantLabel;
-(void)_updateDowntimeView;
-(void)updateGeminiResult:(id)arg1 ;
-(id)_importantString;
-(void)handleGeminiViewTouch:(id)arg1 ;
-(NSDictionary *)importantTextAttributes;
-(NSString *)importantMessage;
-(BOOL)isEmergencyContact;
-(BOOL)allowsPickerActions;
-(void)setAllowsPickerActions:(BOOL)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UILabel *)importantLabel;
-(void)setImportantLabel:(UILabel *)arg1 ;
-(CNContactDowntimeView *)downtimeView;
-(void)setDowntimeView:(CNContactDowntimeView *)arg1 ;
-(double)minLabelsHeight;
-(void)setMinLabelsHeight:(double)arg1 ;
-(double)maxLabelsHeight;
-(void)setMaxLabelsHeight:(double)arg1 ;
-(NSLayoutConstraint *)avatarNameSpacingConstraint;
-(void)setAvatarNameSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(CNContactGeminiView *)geminiView;
-(void)setGeminiView:(CNContactGeminiView *)arg1 ;
-(CNGeminiResult *)geminiResult;
-(CNGeminiPickerController *)geminiPicker;
-(void)setGeminiPicker:(CNGeminiPickerController *)arg1 ;
@end

