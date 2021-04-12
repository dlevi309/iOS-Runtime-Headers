/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSListController.h>

@protocol MCUIInfoListDelegate;
@class NSArray, NSString;

@interface MCUIInfoListController : PSListController {

	id<MCUIInfoListDelegate> _delegate;
	NSArray* _info;
	NSString* _navTitle;
	NSString* _continueButtonTitle;

}

@property (nonatomic,copy) NSArray * info;                                          //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSString * navTitle;                                   //@synthesize navTitle=_navTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MCUIInfoListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * continueButtonTitle;                        //@synthesize continueButtonTitle=_continueButtonTitle - In the implementation block
-(id<MCUIInfoListDelegate>)delegate;
-(void)setDelegate:(id<MCUIInfoListDelegate>)arg1 ;
-(NSArray *)info;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setInfo:(NSArray *)arg1 ;
-(id)specifiers;
-(NSString *)navTitle;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)_tellDelegateWeWantToContinue:(BOOL)arg1 ;
-(void)_installButtonClicked;
-(void)_cancelButtonClicked;
-(void)_setupNavBar:(BOOL)arg1 ;
-(NSString *)continueButtonTitle;
-(void)setContinueButtonTitle:(NSString *)arg1 ;
@end

