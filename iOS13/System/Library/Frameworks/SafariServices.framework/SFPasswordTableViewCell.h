/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIView, WBSSavedPassword, NSString;

@interface SFPasswordTableViewCell : UITableViewCell {

	UILabel* _monogramLabel;
	UIView* _monogramBackgroundView;
	WBSSavedPassword* _savedPassword;
	NSString* _searchPattern;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;              //@synthesize savedPassword=_savedPassword - In the implementation block
@property (nonatomic,readonly) NSString * searchPattern;                      //@synthesize searchPattern=_searchPattern - In the implementation block
-(void)setIcon:(id)arg1 ;
-(WBSSavedPassword *)savedPassword;
-(void)safari_copyUserName;
-(void)safari_copyPassword;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2 ;
-(NSString *)searchPattern;
-(void)setSavedPassword:(id)arg1 searchPattern:(id)arg2 showWarningImage:(BOOL)arg3 ;
-(void)setSavedPassword:(id)arg1 searchPattern:(id)arg2 ;
-(void)setSavedPassword:(id)arg1 withWarnings:(id)arg2 ;
@end

