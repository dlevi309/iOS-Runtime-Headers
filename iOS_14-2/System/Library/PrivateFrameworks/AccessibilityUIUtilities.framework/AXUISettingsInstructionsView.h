/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UILabel, NSMutableArray, OBWelcomeController, NSString;

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView> {

	PSSpecifier* _specifier;
	UILabel* _headerLabel;
	NSMutableArray* _contentLabels;
	NSMutableArray* _marginConstraints;
	OBWelcomeController* _moreInfoController;

}

@property (nonatomic,retain) OBWelcomeController * moreInfoController;              //@synthesize moreInfoController=_moreInfoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSpecifier:(id)arg1 ;
-(void)_initializeContent;
-(id)settingsLocString:(id)arg1 table:(id)arg2 ;
-(void)setMoreInfoController:(OBWelcomeController *)arg1 ;
-(OBWelcomeController *)moreInfoController;
-(void)doneButtonTapped:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setNeedsLayout;
@end

