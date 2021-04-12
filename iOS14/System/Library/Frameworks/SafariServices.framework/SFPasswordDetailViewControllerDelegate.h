/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class WBSSavedPassword;


@protocol SFPasswordDetailViewControllerDelegate <NSObject>
@property (nonatomic,retain) WBSSavedPassword * passwordToRemoveAfterCompletedUpgradeInDetailView; 
@optional
-(id)passwordWarningManagerForPasswordDetailViewController:(id)arg1;
-(id)passwordGeneratorForPasswordDetailViewController:(id)arg1;
-(WBSSavedPassword *)passwordToRemoveAfterCompletedUpgradeInDetailView;
-(void)setPasswordToRemoveAfterCompletedUpgradeInDetailView:(id)arg1;

@end

