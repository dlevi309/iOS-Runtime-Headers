/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_MKAnimationStackViewDelegate.h>
#import <libobjc.A.dylib/MKPlaceSectionViewDelegate.h>

@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate> {

	MKPlaceSectionView* _sectionView;

}

@property (nonatomic,readonly) MKPlaceSectionView * sectionView;              //@synthesize sectionView=_sectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
-(void)stackViewNeedsLayout:(id)arg1 ;
-(void)sectionView:(id)arg1 didSelectHeader:(id)arg2 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didSelectFooter:(id)arg2 ;
-(MKPlaceSectionView *)sectionView;
@end

