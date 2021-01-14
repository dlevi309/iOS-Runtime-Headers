/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)presentationStyle;
-(long long)presentationPriority;
-(BOOL)handleEvent:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(id)view;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

