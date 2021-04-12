/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFCollectionViewDelegateLayout.h>

@class SFCollectionViewLayout, UITextView, SFAirDropActiveIconView, NSString;

@interface SFAirDropInstructionsViewController : UIViewController <SFCollectionViewDelegateLayout> {

	SFCollectionViewLayout* _collectionViewLayout;
	CGSize _minimumPreferredContentSize;
	UITextView* _instructionsTextView;
	SFAirDropActiveIconView* _airDropActiveIconView;

}

@property (nonatomic,readonly) UITextView * instructionsTextView;                            //@synthesize instructionsTextView=_instructionsTextView - In the implementation block
@property (nonatomic,readonly) SFAirDropActiveIconView * airDropActiveIconView;              //@synthesize airDropActiveIconView=_airDropActiveIconView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(void)_updateFontSizes;
-(void)updatePreferredContentSize;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned)arg3 ;
-(CGSize)_cachedPreferredItemSize;
-(id)_airDropText;
-(void)_layoutiOSSubviews;
-(double)_titleLabelHeight;
-(id)_instructionsText;
-(id)_instructionsBaseFormatString;
-(UITextView *)instructionsTextView;
-(SFAirDropActiveIconView *)airDropActiveIconView;
@end

