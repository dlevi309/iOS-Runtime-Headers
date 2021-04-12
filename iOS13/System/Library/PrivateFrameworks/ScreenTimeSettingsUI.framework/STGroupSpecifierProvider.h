/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKit/UITableViewDelegate.h>

@protocol STGroupSpecifierProviderDelegate;
@class UIViewController, PSSpecifier, NSMutableArray, NSArray, NSString;

@interface STGroupSpecifierProvider : NSObject <UITableViewDelegate> {

	BOOL _isHidden;
	BOOL _invalid;
	UIViewController*<STGroupSpecifierProviderDelegate> _delegate;
	PSSpecifier* _groupSpecifier;
	NSMutableArray* _privateSpecifiers;

}

@property (retain) NSMutableArray * privateSpecifiers;                                                         //@synthesize privateSpecifiers=_privateSpecifiers - In the implementation block
@property (assign) BOOL invalid;                                                                               //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<STGroupSpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                                                    //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                                                     //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * specifiers; 
@property (readonly) NSMutableArray * mutableSpecifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfIsHidden;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(UIViewController*<STGroupSpecifierProviderDelegate>)delegate;
-(void)setDelegate:(UIViewController*<STGroupSpecifierProviderDelegate>)arg1 ;
-(BOOL)isHidden;
-(void)setIsHidden:(BOOL)arg1 ;
-(BOOL)invalid;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setInvalid:(BOOL)arg1 ;
-(NSArray *)specifiers;
-(void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 ;
-(void)lazyLoadBundle:(id)arg1 ;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)showStoreDemoAlert;
-(void)showPINSheet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableSpecifiers;
-(void)showController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popToViewControllerAnimated:(BOOL)arg1 ;
-(void)_tableCellHeightDidChange:(id)arg1 ;
-(NSMutableArray *)privateSpecifiers;
-(void)reloadSectionHeaderFootersWithAnimation:(long long)arg1 ;
-(id)specifiersAtIndexes:(id)arg1 ;
-(void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeSpecifiersAtIndexes:(id)arg1 ;
-(void)replaceObjectInSpecifiersAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceSpecifiersAtIndexes:(id)arg1 withSpecifiers:(id)arg2 ;
-(void)setPrivateSpecifiers:(NSMutableArray *)arg1 ;
@end

