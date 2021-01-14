/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKNavigationController.h>
#import <libobjc.A.dylib/PKAddPassesCardStackViewControllerDelegate.h>
#import <libobjc.A.dylib/PKServiceAddPassesViewControllerProtocol.h>

@class PKAddPassesCardStackViewController, NSString;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {

	CGSize _screenSize;
	double _screenScale;
	BOOL _placeholderViewControllerDidCancel;
	PKAddPassesCardStackViewController* _cardStackViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_exportedInterface;
-(BOOL)prefersStatusBarHidden;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setDisplayPropertiesWithScreenSize:(CGSize)arg1 scale:(double)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)resetBrightness;
-(void)evaluateBrightness;
-(void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2 ;
-(void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2 ;
-(void)ingestPassesWithData:(id)arg1 fromPresentationSource:(unsigned long long)arg2 ;
@end

