/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewCell.h>

@class MCDetailsHeaderContentView;

@interface MCDetailsHeaderCell : UITableViewCell {

	MCDetailsHeaderContentView* _headerView;

}
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDisplayName:(id)arg1 ;
-(void)setOrganizationName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)hideActionButton;
-(double)heightForTableView;
-(void)setIsExpired:(BOOL)arg1 ;
-(void)showActionButton;
-(void)setActionToInstall;
-(void)setActionToRemove;
@end

