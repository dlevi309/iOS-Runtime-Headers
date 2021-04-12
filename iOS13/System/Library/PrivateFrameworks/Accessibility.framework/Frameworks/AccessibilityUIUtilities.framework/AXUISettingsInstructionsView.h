/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UILabel, NSMutableArray;

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	UILabel* _headerLabel;
	NSMutableArray* _contentLabels;
	NSMutableArray* _marginConstraints;

}
-(void)setNeedsLayout;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)_initializeContent;
-(id)settingsLocString:(id)arg1 table:(id)arg2 ;
@end

