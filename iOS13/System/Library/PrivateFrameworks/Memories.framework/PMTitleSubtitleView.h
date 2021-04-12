/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString, NSLayoutConstraint, UIViewController, PXTitleSubtitleUILabel, UIView, PXExtendedTraitCollection;

@interface PMTitleSubtitleView : UIView <PXChangeObserver> {

	CGPoint _ptOffset;
	double _titleScale;
	NSString* _titleFontName;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _leftConstraint;
	UIViewController* _viewController;
	PXTitleSubtitleUILabel* _label;
	UIView* _dark;
	PXExtendedTraitCollection* _extendedTraitCollection;
	CGRect _specSize;

}

@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                            //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                              //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                         //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleUILabel * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * dark;                                                    //@synthesize dark=_dark - In the implementation block
@property (nonatomic,retain) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (assign,nonatomic) CGRect specSize;                                                  //@synthesize specSize=_specSize - In the implementation block
@property (assign,nonatomic) double titleScale;                                                //@synthesize titleScale=_titleScale - In the implementation block
@property (assign,nonatomic) CGPoint ptOffset; 
@property (nonatomic,readonly) double heightOfTitleArea; 
@property (nonatomic,retain) NSString * titleFontName;                                         //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * subtitleText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLabel:(PXTitleSubtitleUILabel *)arg1 ;
-(PXTitleSubtitleUILabel *)label;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSLayoutConstraint *)bottomConstraint;
-(UIViewController *)viewController;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)titleFontName;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setTitleFontName:(NSString *)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(void)setExtendedTraitCollection:(PXExtendedTraitCollection *)arg1 ;
-(double)toolbarHeight;
-(NSLayoutConstraint *)leftConstraint;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)registerForChangesFromViewController:(id)arg1 ;
-(double)heightOfTitleArea;
-(void)setTitleScale:(double)arg1 ;
-(double)titleScale;
-(void)updateTitleAnimationFromVideoComposition:(id)arg1 ;
-(void)setPtOffset:(CGPoint)arg1 ;
-(void)updateSubtitleTitleLabelForSize:(CGSize)arg1 ;
-(void)setDark:(UIView *)arg1 ;
-(UIView *)dark;
-(CGPoint)ptOffset;
-(void)updateSpecIfNeeded;
-(void)updateDarkFrame;
-(CGRect)specSize;
-(void)setSpecSize:(CGRect)arg1 ;
-(void)updateFeatureSpecWithExtendedTraitCollection:(id)arg1 ;
-(void)updateSpecialConstraints;
-(void)setSpecForVerticalExport;
@end

