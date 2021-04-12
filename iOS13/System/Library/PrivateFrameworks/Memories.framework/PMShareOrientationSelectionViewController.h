/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>

@class PMActivityItemProvider, PMPosterViewController, NSLayoutConstraint;

@interface PMShareOrientationSelectionViewController : UIViewController {

	PMActivityItemProvider* _itemProvider;
	double _exportAspect;
	PMPosterViewController* _posterViewController;
	NSLayoutConstraint* _aspectRatioConstraint;

}

@property (nonatomic,retain) PMPosterViewController * posterViewController;              //@synthesize posterViewController=_posterViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * aspectRatioConstraint;                 //@synthesize aspectRatioConstraint=_aspectRatioConstraint - In the implementation block
@property (assign,nonatomic,__weak) PMActivityItemProvider * itemProvider;               //@synthesize itemProvider=_itemProvider - In the implementation block
@property (assign,nonatomic) double exportAspect;                                        //@synthesize exportAspect=_exportAspect - In the implementation block
-(id)init;
-(PMActivityItemProvider *)itemProvider;
-(void)setItemProvider:(PMActivityItemProvider *)arg1 ;
-(void)viewDidLoad;
-(void)createConstraints;
-(NSLayoutConstraint *)aspectRatioConstraint;
-(void)setAspectRatioConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPosterViewController:(PMPosterViewController *)arg1 ;
-(PMPosterViewController *)posterViewController;
-(double)upScalingFactor;
-(void)_updateSharingHeaderIcons;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1 ;
@end

