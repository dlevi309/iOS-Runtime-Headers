/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSString, UICellAccessoryManager;

@interface UITableCell : UIView {

	BOOL _editing;
	UIView* _contentView;
	unsigned long long _accessoryTypes;
	UIView* _accessoryView;
	unsigned long long _editingAccessoryTypes;
	UIView* _editingAccessoryView;
	unsigned long long _editingStyle;
	NSString* _badgeText;
	UICellAccessoryManager* _accessoryManager;

}

@property (nonatomic,retain) UICellAccessoryManager * accessoryManager;              //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL editing;                                           //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryTypes;                      //@synthesize accessoryTypes=_accessoryTypes - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) unsigned long long editingAccessoryTypes;               //@synthesize editingAccessoryTypes=_editingAccessoryTypes - In the implementation block
@property (nonatomic,retain) UIView * editingAccessoryView;                          //@synthesize editingAccessoryView=_editingAccessoryView - In the implementation block
@property (assign,nonatomic) unsigned long long editingStyle;                        //@synthesize editingStyle=_editingStyle - In the implementation block
@property (nonatomic,copy) NSString * badgeText;                                     //@synthesize badgeText=_badgeText - In the implementation block
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setEditing:(BOOL)arg1 ;
-(unsigned long long)editingStyle;
-(void)setEditingStyle:(unsigned long long)arg1 ;
-(UIView *)editingAccessoryView;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(BOOL)editing;
-(void)_updateAccessoryMetrics;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(void)_updateAccessories;
-(UICellAccessoryManager *)accessoryManager;
-(NSString *)badgeText;
-(id)_accessoriesForAccessoryTypes:(unsigned long long)arg1 view:(id)arg2 editing:(BOOL)arg3 ;
-(id)_accessoriesForEditingStyle:(unsigned long long)arg1 ;
-(void)setAccessoryTypes:(unsigned long long)arg1 ;
-(void)setEditingAccessoryTypes:(unsigned long long)arg1 ;
-(void)setBadgeText:(NSString *)arg1 ;
-(unsigned long long)accessoryTypes;
-(unsigned long long)editingAccessoryTypes;
-(void)setAccessoryManager:(UICellAccessoryManager *)arg1 ;
@end

