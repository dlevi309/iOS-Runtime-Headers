/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUAssetPickerCoordinatorActionHandler.h>
#import <libobjc.A.dylib/_PUPickerUnavailableUIViewControllerDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSFileProviderDomain, PUAssetPickerCoordinator, NSLayoutConstraint, NSString;

@interface PUPickerPrincipalUIViewController : UIViewController <PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableUIViewControllerDelegate, NSExtensionRequestHandling> {

	NSFileProviderDomain* _domain;
	PUAssetPickerCoordinator* _coordinator;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	NSLayoutConstraint* _leadingSafeAreaConstraint;
	NSLayoutConstraint* _trailingSafeAreaConstraint;

}

@property (nonatomic,retain) NSFileProviderDomain * domain;                                //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) PUAssetPickerCoordinator * coordinator;                       //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                           //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                        //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingConstraint;                       //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingConstraint;                      //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingSafeAreaConstraint;               //@synthesize leadingSafeAreaConstraint=_leadingSafeAreaConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingSafeAreaConstraint;              //@synthesize trailingSafeAreaConstraint=_trailingSafeAreaConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
-(void)updateViewConstraints;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingConstraint;
-(NSLayoutConstraint *)topConstraint;
-(void)setCoordinator:(PUAssetPickerCoordinator *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(BOOL)setImagePickerPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDomain:(NSFileProviderDomain *)arg1 ;
-(NSFileProviderDomain *)domain;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg1 ;
-(void)coordinator:(id)arg1 didFinishWithAssets:(id)arg2 ;
-(id)synchronousLoadConfigurationFromExtensionContext:(id*)arg1 ;
-(void)logExitIfNeeded:(id)arg1 ;
-(NSLayoutConstraint *)leadingSafeAreaConstraint;
-(void)setLeadingSafeAreaConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingSafeAreaConstraint;
-(void)setTrailingSafeAreaConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingConstraint;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PUAssetPickerCoordinator *)coordinator;
@end

