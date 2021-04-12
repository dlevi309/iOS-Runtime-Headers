/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXPhotosDetailsBarsContentView.h>

@class NSString, UIColor, UIFont, UILabel, NSArray;

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX51 _needsUpdateFlags;
	BOOL __subtitleVisible;
	long long _verticalSizeClass;
	NSString* _title;
	NSString* _subtitle;
	UIColor* _titleTextColor;
	UIColor* _subtitleTextColor;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	long long _textAlignment;
	double _subviewsAlpha;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	NSArray* __constraints;
	UIEdgeInsets _margins;

}

@property (nonatomic,readonly) UILabel * _titleLabel;                                                                  //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _subtitleLabel;                                                               //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (assign,setter=_setSubtitleVisible:,getter=_isSubtitleVisible,nonatomic) BOOL _subtitleVisible;              //@synthesize _subtitleVisible=__subtitleVisible - In the implementation block
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                           //@synthesize _constraints=__constraints - In the implementation block
@property (assign,nonatomic) long long verticalSizeClass;                                                              //@synthesize verticalSizeClass=_verticalSizeClass - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                                                                 //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIColor * subtitleTextColor;                                                              //@synthesize subtitleTextColor=_subtitleTextColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                                       //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                                                                    //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                                                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,setter=setMargins:,nonatomic) UIEdgeInsets margins;                                                  //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) double subviewsAlpha;                                                                     //@synthesize subviewsAlpha=_subviewsAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setConstraints:(id)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(double)subviewsAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(void)_setSubtitleVisible:(BOOL)arg1 ;
-(void)_invalidateFonts;
-(NSString *)subtitle;
-(UIColor *)subtitleTextColor;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)_updateIfNeeded;
-(void)_updateFontsIfNeeded;
-(long long)textAlignment;
-(UIEdgeInsets)margins;
-(UILabel *)_subtitleLabel;
-(void)updateConstraints;
-(void)setSubtitleTextColor:(UIColor *)arg1 ;
-(long long)verticalSizeClass;
-(NSArray *)_constraints;
-(UIFont *)subtitleFont;
-(void)setVerticalSizeClass:(long long)arg1 ;
-(void)_updateSizeIfNeeded;
-(void)_updateConstraintsIfNeeded;
-(BOOL)_needsUpdate;
-(void)_invalidateSize;
-(BOOL)_isSubtitleVisible;
-(void)_updateTextsIfNeeded;
-(void)_invalidateTexts;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(UILabel *)_titleLabel;
-(UIColor *)titleTextColor;
-(void)_setNeedsUpdate;
-(void)setSubviewsAlpha:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(NSString *)title;
@end

