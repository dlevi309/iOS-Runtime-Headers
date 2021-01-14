/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ADActionViewControllerInterface.h>

@class ADAdSpace, NSString;

@interface ADActionViewController : UIViewController <ADActionViewControllerInterface> {

	BOOL _readyForPresentation;
	ADAdSpace* _adSpace;

}

@property (assign,nonatomic,__weak) ADAdSpace * adSpace;               //@synthesize adSpace=_adSpace - In the implementation block
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestActionViewControllerForAdSpace:(id)arg1 ;
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
-(ADAdSpace *)adSpace;
-(void)loadView;
-(void)dismiss;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(void)setReadyForPresentation:(BOOL)arg1 ;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1 ;
@end

