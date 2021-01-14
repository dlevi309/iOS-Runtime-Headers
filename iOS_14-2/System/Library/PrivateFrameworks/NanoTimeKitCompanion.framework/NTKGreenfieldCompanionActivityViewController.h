/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ShareSheet/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerObjectManipulationDelegate.h>
#import <libobjc.A.dylib/NTKGreenfieldCompanionActivityItemProviderDelegate.h>

@class NTKGreenfieldDraftRecipe, NSString;

@interface NTKGreenfieldCompanionActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate, NTKGreenfieldCompanionActivityItemProviderDelegate> {

	NTKGreenfieldDraftRecipe* _draftRecipe;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_customizationGroupsForActivityViewController:(id)arg1 ;
-(void)companionActivityItemProvider:(id)arg1 handleError:(id)arg2 ;
-(id)initWithDraftRecipe:(id)arg1 previewImage:(id)arg2 ;
-(void)_handleCustomizationValueChange:(id)arg1 sharingOption:(id)arg2 ;
@end

