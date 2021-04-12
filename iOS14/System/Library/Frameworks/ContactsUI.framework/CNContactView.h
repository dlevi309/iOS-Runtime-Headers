/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNMaskingTableView.h>

@class UIView, CNContact, UIColor, NSDictionary, CNContactHeaderView;

@interface CNContactView : CNMaskingTableView {

	BOOL _cellsLayoutCachingEnabled;
	BOOL _shouldUseMapTiles;
	BOOL _needsUpdateVisibleCells;
	UIView* _customHeaderView;
	CNContact* _contact;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	NSDictionary* _labelTextAttributes;
	NSDictionary* _valueTextAttributes;
	NSDictionary* _actionTextAttributes;
	CGSize _oldSize;

}

@property (nonatomic,retain) CNContact * contact;                                                            //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) CGSize oldSize;                                                                 //@synthesize oldSize=_oldSize - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateVisibleCells;                                                   //@synthesize needsUpdateVisibleCells=_needsUpdateVisibleCells - In the implementation block
@property (nonatomic,retain) UIView * customHeaderView;                                                      //@synthesize customHeaderView=_customHeaderView - In the implementation block
@property (nonatomic,readonly) CNContactHeaderView * defaultHeaderView; 
@property (assign,getter=isCellsLayoutCachingEnabled,nonatomic) BOOL cellsLayoutCachingEnabled;              //@synthesize cellsLayoutCachingEnabled=_cellsLayoutCachingEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMapTiles;                                                         //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) UIColor * separatorColor; 
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                                               //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;                                          //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                                               //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * valueTextAttributes;                                               //@synthesize valueTextAttributes=_valueTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * actionTextAttributes;                                              //@synthesize actionTextAttributes=_actionTextAttributes - In the implementation block
+(id)nameProperties;
+(id)cellIdentifierForClass:(Class)arg1 ;
+(id)cellIdentifierForActions;
+(id)cellIdentifierForSplitActions;
+(id)cellIdentifierForPropertyPlaceholder;
+(id)cellIdentifierForFaceTimeGroup;
+(id)cellIdentifierForLinkedCardsGroup;
+(id)cellIdentifierForLinkedCardsEditingGroup;
+(id)cellIdentifierForLinkedCardsPlaceholderGroup;
+(id)cellIdentifierForProperty:(id)arg1 ;
+(id)cellIdentifierForEditingProperty:(id)arg1 ;
+(Class)classForCellIdentifier:(id)arg1 ;
+(id)requiredNameProperties;
+(id)namePropertiesForContact:(id)arg1 ;
+(id)allCardProperties;
+(id)defaultCardProperties;
+(id)optionalCardProperties;
+(id)allImageProperties;
+(BOOL)isMultiValueProperty:(id)arg1 ;
+(BOOL)isFixedValueProperty:(id)arg1 ;
-(CNContact *)contact;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(void)setContact:(CNContact *)arg1 ;
-(void)updateFontSizes;
-(CGSize)oldSize;
-(UIColor *)selectedCellBackgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)sectionBackgroundColor;
-(void)setEditing:(BOOL)arg1 ;
-(void)setOldSize:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateFontColors;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 contact:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 contact:(id)arg2 ;
-(void)_cnui_applyContactStyle;
-(void)updateTableViewMetrics;
-(CNContactHeaderView *)defaultHeaderView;
-(void)registerContactCellClass:(Class)arg1 ;
-(void)setNeedsUpdateVisibleCells;
-(void)setAttributesFromContactView:(id)arg1 runningInContactsAppOniPad:(BOOL)arg2 ;
-(void)applyCellAppearance:(id)arg1 ;
-(void)updateVisibleCellsIfNeeded;
-(BOOL)isCellsLayoutCachingEnabled;
-(BOOL)shouldUseMapTiles;
-(void)setCellsLayoutCachingEnabled:(BOOL)arg1 ;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)actionTextAttributes;
-(void)setActionTextAttributes:(NSDictionary *)arg1 ;
-(BOOL)needsUpdateVisibleCells;
-(void)setNeedsUpdateVisibleCells:(BOOL)arg1 ;
-(UIView *)customHeaderView;
-(void)setCustomHeaderView:(UIView *)arg1 ;
@end

