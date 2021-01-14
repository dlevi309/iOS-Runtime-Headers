/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSModalViewControllerBase.h>

@protocol CSResetRestoreStatusProviding;
@interface CSResetRestoreViewController : CSModalViewControllerBase {

	id<CSResetRestoreStatusProviding> _statusProvider;

}
-(long long)presentationPriority;
-(void)aggregateBehavior:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithStatusProvider:(id)arg1 ;
-(id)_currentTextForResetOrRestoreState;
@end

