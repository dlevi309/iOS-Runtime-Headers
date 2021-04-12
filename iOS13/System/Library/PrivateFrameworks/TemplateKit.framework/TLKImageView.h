/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIBoxArrangementDataSource.h>
#import <libobjc.A.dylib/NUIArrangementContainer.h>

@class TLKImage, TLKAppearance, UIImageView, TLKArrangementItem, NUIBoxArrangement, NSString;

@interface TLKImageView : TLKView <NUIBoxArrangementDataSource, NUIArrangementContainer> {

	BOOL _useButtonColoring;
	TLKImage* _tlkImage;
	unsigned long long _prominence;
	TLKAppearance* _appearanceOverride;
	long long _verticalAlignment;
	long long _horizontalAlignment;
	UIImageView* _imageView;
	TLKArrangementItem* _sizingHelper;
	NUIBoxArrangement* _boxArrangement;
	CGSize _minimumSize;
	CGSize _maximumSize;
	CGRect _rectOfShadow;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TLKArrangementItem * sizingHelper;               //@synthesize sizingHelper=_sizingHelper - In the implementation block
@property (nonatomic,retain) NUIBoxArrangement * boxArrangement;              //@synthesize boxArrangement=_boxArrangement - In the implementation block
@property (assign,nonatomic) CGRect rectOfShadow;                             //@synthesize rectOfShadow=_rectOfShadow - In the implementation block
@property (nonatomic,retain) TLKImage * tlkImage;                             //@synthesize tlkImage=_tlkImage - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                   //@synthesize prominence=_prominence - In the implementation block
@property (assign,nonatomic) BOOL useButtonColoring;                          //@synthesize useButtonColoring=_useButtonColoring - In the implementation block
@property (nonatomic,retain) TLKAppearance * appearanceOverride;              //@synthesize appearanceOverride=_appearanceOverride - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;                              //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                     //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                   //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(CGSize)roundedSizeForSize:(CGSize)arg1 ;
+(BOOL)imageIsEligibleForShadow:(id)arg1 isTemplate:(BOOL)arg2 ;
+(BOOL)sizeIsShadowWorthy:(CGSize)arg1 ;
-(id)init;
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)didMoveToWindow;
-(long long)effectiveUserInterfaceLayoutDirection;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setImageView:(UIImageView *)arg1 ;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setAppearanceOverride:(TLKAppearance *)arg1 ;
-(TLKAppearance *)appearanceOverride;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(long long)numberOfItemsInBoxArrangement:(id)arg1 ;
-(id)boxArrangement:(id)arg1 itemAtIndex:(long long)arg2 horizontalAlignment:(long long*)arg3 verticalAlignment:(long long*)arg4 ;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(void)setSizingHelper:(TLKArrangementItem *)arg1 ;
-(void)setBoxArrangement:(NUIBoxArrangement *)arg1 ;
-(TLKArrangementItem *)sizingHelper;
-(TLKImage *)tlkImage;
-(void)setRectOfShadow:(CGRect)arg1 ;
-(CGSize)constrainedSizeForImageSize:(CGSize)arg1 ;
-(NUIBoxArrangement *)boxArrangement;
-(void)invalidateIntrinsicContentSizeIfNecessary;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)useButtonColoring;
-(void)updateShadow;
-(CGRect)rectOfShadow;
-(void)setTlkImage:(TLKImage *)arg1 ;
-(void)setUseButtonColoring:(BOOL)arg1 ;
-(id)actualImageView;
@end

