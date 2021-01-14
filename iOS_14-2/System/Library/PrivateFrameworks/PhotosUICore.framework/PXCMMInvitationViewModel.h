/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, NSAttributedString, UIColor;

@interface PXCMMInvitationViewModel : PXObservable {

	BOOL _highlighted;
	BOOL _selected;
	NSString* _posterTitle;
	NSString* _posterSubtitle;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedSubtitle1;
	NSAttributedString* _attributedSubtitle2;
	UIColor* _opaqueAncestorBackgroundColor;

}

@property (nonatomic,copy,readonly) NSString * posterTitle;                                 //@synthesize posterTitle=_posterTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * posterSubtitle;                              //@synthesize posterSubtitle=_posterSubtitle - In the implementation block
@property (nonatomic,copy,readonly) id<PXDisplayAsset> posterAsset;                         //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,copy,readonly) id<PXUIImageProvider> posterMediaProvider;              //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedTitle;                   //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedSubtitle1;               //@synthesize attributedSubtitle1=_attributedSubtitle1 - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedSubtitle2;               //@synthesize attributedSubtitle2=_attributedSubtitle2 - In the implementation block
@property (nonatomic,readonly) UIColor * opaqueAncestorBackgroundColor;                     //@synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                       //@synthesize highlighted=_highlighted - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                             //@synthesize selected=_selected - In the implementation block
-(NSAttributedString *)attributedTitle;
-(id)init;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(BOOL)isHighlighted;
-(NSString *)posterTitle;
-(void)setPosterTitle:(NSString *)arg1 ;
-(void)setPosterSubtitle:(NSString *)arg1 ;
-(void)setPosterAsset:(id<PXDisplayAsset>)arg1 ;
-(void)setPosterMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)setAttributedSubtitle1:(NSAttributedString *)arg1 ;
-(void)setAttributedSubtitle2:(NSAttributedString *)arg1 ;
-(NSString *)posterSubtitle;
-(void)setOpaqueAncestorBackgroundColor:(UIColor *)arg1 ;
-(NSAttributedString *)attributedSubtitle1;
-(NSAttributedString *)attributedSubtitle2;
-(UIColor *)opaqueAncestorBackgroundColor;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end
