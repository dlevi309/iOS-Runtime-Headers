/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
-(MKPlaceSectionView *)sectionView;
-(void)stackViewNeedsLayout:(id)arg1 ;
-(void)sectionView:(id)arg1 didSelectHeader:(id)arg2 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)loadView;
-(void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didSelectFooter:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

