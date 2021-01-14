/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleFlowViewController.h>

@class UILabel, PXPeopleBootstrapContext, NSString;

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController> {

	id _context;
	UILabel* _promptLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,readonly) PXPeopleBootstrapContext * bootstrapContext; 
@property (nonatomic,__weak,readonly) UILabel * promptLabel;                                                  //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * descriptionLabel;                                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) id context;                                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic,__weak) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)promptLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(CGSize)preferredSize;
-(id)context;
-(void)updateUI;
-(PXPeopleBootstrapContext *)bootstrapContext;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(id)_localizedTitleString;
-(void)viewDidLoad;
-(id)_localizedPromptString;
-(id)_localizedDescriptionString;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setContext:(id)arg1 ;
@end

