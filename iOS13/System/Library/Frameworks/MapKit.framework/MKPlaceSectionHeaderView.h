/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class NSLayoutConstraint, NSString, MKVibrantLabel, _MKRightImageButton, NSArray, UIImage;

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {

	NSLayoutConstraint* _baselineToTopConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	NSLayoutConstraint* _baselineToBaselineConstraint;
	NSLayoutConstraint* _iconHeightConstraint;
	NSLayoutConstraint* _iconWidthConstraint;
	BOOL _contentChanged;
	double _width;
	BOOL _showSeeMoreButton;
	NSString* _seeMoreButtonText;
	NSString* _providerName;
	MKVibrantLabel* _sectionHeaderLabel;
	_MKRightImageButton* _seeMoreButton;
	NSArray* _seeMoreButtonConstraints;
	NSArray* _constraints;
	SEL _action;
	id _target;
	CGSize _iconDisplaySize;

}

@property (nonatomic,retain) MKVibrantLabel * sectionHeaderLabel;              //@synthesize sectionHeaderLabel=_sectionHeaderLabel - In the implementation block
@property (nonatomic,retain) _MKRightImageButton * seeMoreButton;              //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (nonatomic,retain) NSArray * seeMoreButtonConstraints;               //@synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) SEL action;                                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * seeMoreButtonText;                     //@synthesize seeMoreButtonText=_seeMoreButtonText - In the implementation block
@property (nonatomic,retain) NSString * providerName;                          //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) CGSize iconDisplaySize;                           //@synthesize iconDisplaySize=_iconDisplaySize - In the implementation block
@property (assign,nonatomic) BOOL showSeeMoreButton;                           //@synthesize showSeeMoreButton=_showSeeMoreButton - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSArray *)constraints;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIImage *)icon;
-(void)setAction:(SEL)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)updateContent;
-(void)_updateConstraints;
-(void)contentSizeDidChange;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSString *)providerName;
-(void)createConstraints;
-(MKVibrantLabel *)sectionHeaderLabel;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)seeMoreButtonText;
-(BOOL)showSeeMoreButton;
-(BOOL)shouldStack;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSeeMoreButtonText:(NSString *)arg1 ;
-(void)setIconDisplaySize:(CGSize)arg1 ;
-(void)setShowSeeMoreButton:(BOOL)arg1 ;
-(CGSize)iconDisplaySize;
-(void)setSectionHeaderLabel:(MKVibrantLabel *)arg1 ;
-(_MKRightImageButton *)seeMoreButton;
-(void)setSeeMoreButton:(_MKRightImageButton *)arg1 ;
-(NSArray *)seeMoreButtonConstraints;
-(void)setSeeMoreButtonConstraints:(NSArray *)arg1 ;
@end

