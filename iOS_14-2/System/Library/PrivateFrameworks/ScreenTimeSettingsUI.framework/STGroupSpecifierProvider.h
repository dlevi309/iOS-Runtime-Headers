/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)beginUpdates;
-(void)endUpdates;
-(NSArray *)specifiers;
-(BOOL)isHidden;
-(id)init;
-(BOOL)invalid;
-(UIViewController*<STGroupSpecifierProviderDelegate>)delegate;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(PSSpecifier *)groupSpecifier;
-(void)setDelegate:(UIViewController*<STGroupSpecifierProviderDelegate>)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(void)invalidate;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 ;
-(void)lazyLoadBundle:(id)arg1 ;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg1 ;
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

