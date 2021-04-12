/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, NSArray, UIImage, UIColor;

@interface PXCMMSuggestionViewModel : PXObservable {

	BOOL _containsUnverifiedPersons;
	BOOL _highlighted;
	BOOL _selected;
	NSString* _posterTitle;
	NSString* _posterSubtitle;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	NSArray* _localizedNames;
	NSString* _subtitle;
	UIImage* _combinedFaceTileImage;
	UIColor* _opaqueAncestorBackgroundColor;

}

@property (nonatomic,copy,readonly) NSString * posterTitle;                            //@synthesize posterTitle=_posterTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * posterSubtitle;                         //@synthesize posterSubtitle=_posterSubtitle - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                         //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;              //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizedNames;                          //@synthesize localizedNames=_localizedNames - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons;                         //@synthesize containsUnverifiedPersons=_containsUnverifiedPersons - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) UIImage * combinedFaceTileImage;                        //@synthesize combinedFaceTileImage=_combinedFaceTileImage - In the implementation block
@property (nonatomic,readonly) UIColor * opaqueAncestorBackgroundColor;                //@synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                  //@synthesize highlighted=_highlighted - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
+(double)faceTileImageDiameter;
-(NSArray *)localizedNames;
-(void)setCombinedFaceTileImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)combinedFaceTileImage;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(void)setLocalizedNames:(NSArray *)arg1 ;
-(BOOL)isSelected;
-(NSString *)subtitle;
-(void)setSelected:(BOOL)arg1 ;
-(void)setContainsUnverifiedPersons:(BOOL)arg1 ;
-(BOOL)containsUnverifiedPersons;
-(BOOL)isHighlighted;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)posterTitle;
-(void)setPosterTitle:(NSString *)arg1 ;
-(void)setPosterSubtitle:(NSString *)arg1 ;
-(void)setPosterAsset:(id<PXDisplayAsset>)arg1 ;
-(void)setPosterMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(NSString *)posterSubtitle;
-(void)setOpaqueAncestorBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)opaqueAncestorBackgroundColor;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

