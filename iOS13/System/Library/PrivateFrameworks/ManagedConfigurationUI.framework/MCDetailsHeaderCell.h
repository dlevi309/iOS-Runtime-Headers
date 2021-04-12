/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewCell.h>

@class MCDetailsHeaderContentView;

@interface MCDetailsHeaderCell : UITableViewCell {

	MCDetailsHeaderContentView* _headerView;

}
-(void)setDelegate:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)layoutSubviews;
-(void)setOrganizationName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)hideActionButton;
-(double)heightForTableView;
-(void)showActionButton;
-(void)setActionToRemove;
-(void)setIsExpired:(BOOL)arg1 ;
-(void)setActionToInstall;
@end

