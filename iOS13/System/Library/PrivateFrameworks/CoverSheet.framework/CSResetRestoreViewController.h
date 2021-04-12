/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSModalViewControllerBase.h>

@protocol CSResetRestoreStatusProviding;
@interface CSResetRestoreViewController : CSModalViewControllerBase {

	id<CSResetRestoreStatusProviding> _statusProvider;

}
-(void)viewDidLoad;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)initWithStatusProvider:(id)arg1 ;
-(id)_currentTextForResetOrRestoreState;
@end

