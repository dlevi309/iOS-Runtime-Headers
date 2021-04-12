/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSEventHandling.h>

@class UMUser, CSUserPictureView, NSString;

@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <CSEventHandling> {

	UMUser* _user;
	CSUserPictureView* _userPictureView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
+(BOOL)isUserPictureSupported;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)presentationStyle;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
@end

