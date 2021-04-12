/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSingleViewLayoutConfiguration.h>

@class PXGSingleViewLayout, NSString, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec, _PXImportSectionHeaderLayout;

@interface _PXImportSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration> {

	NSString* _primaryText;
	NSString* _secondaryText;
	long long _actionType;
	NSString* _backdropViewGroupName;
	UIImage* _gradientImage;
	double _gradientAlpha;
	double _gradientOverhang;
	PXCuratedLibrarySectionHeaderLayoutSpec* _buttonSpec;
	_PXImportSectionHeaderLayout* _weakLayout;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * primaryText;                                              //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                                            //@synthesize secondaryText=_secondaryText - In the implementation block
@property (assign,nonatomic) long long actionType;                                              //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                                    //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (nonatomic,retain) UIImage * gradientImage;                                           //@synthesize gradientImage=_gradientImage - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                                              //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (assign,nonatomic) double gradientOverhang;                                           //@synthesize gradientOverhang=_gradientOverhang - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * buttonSpec;              //@synthesize buttonSpec=_buttonSpec - In the implementation block
@property (assign,nonatomic,__weak) _PXImportSectionHeaderLayout * weakLayout;                  //@synthesize weakLayout=_weakLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(UIEdgeInsets)edgeInsets;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)buttonSpec;
-(void)setButtonSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(void)setGradientImage:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(_PXImportSectionHeaderLayout *)weakLayout;
-(void)setGradientOverhang:(double)arg1 ;
-(void)setWeakLayout:(_PXImportSectionHeaderLayout *)arg1 ;
-(void)setGradientAlpha:(double)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(double)gradientOverhang;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(NSString *)backdropViewGroupName;
-(double)gradientAlpha;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(UIImage *)gradientImage;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

