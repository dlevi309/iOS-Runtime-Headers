/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSingleViewLayoutConfiguration.h>

@class _PXAlbumSectionHeaderLayout, NSString, NSDate, NSArray, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface _PXPhotosSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration> {

	BOOL _allowsPhotosDetailsInteraction;
	_PXAlbumSectionHeaderLayout* weakLayout;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _locationNames;
	long long _actionType;
	NSString* _backdropViewGroupName;
	UIImage* _gradientImage;
	double _gradientAlpha;
	double _gradientOverhang;
	PXCuratedLibrarySectionHeaderLayoutSpec* _buttonSpec;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                  //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSArray * locationNames;                                             //@synthesize locationNames=_locationNames - In the implementation block
@property (assign,nonatomic) BOOL allowsPhotosDetailsInteraction;                               //@synthesize allowsPhotosDetailsInteraction=_allowsPhotosDetailsInteraction - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) long long actionType;                                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                                    //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (nonatomic,retain) UIImage * gradientImage;                                           //@synthesize gradientImage=_gradientImage - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                                              //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (assign,nonatomic) double gradientOverhang;                                           //@synthesize gradientOverhang=_gradientOverhang - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * buttonSpec;              //@synthesize buttonSpec=_buttonSpec - In the implementation block
@property (assign,nonatomic,__weak) _PXAlbumSectionHeaderLayout * weakLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSDate *)endDate;
-(UIEdgeInsets)edgeInsets;
-(void)setStartDate:(NSDate *)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)buttonSpec;
-(NSDate *)startDate;
-(NSArray *)locationNames;
-(void)setButtonSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(BOOL)allowsPhotosDetailsInteraction;
-(void)setTitle:(NSString *)arg1 ;
-(void)setGradientImage:(UIImage *)arg1 ;
-(void)setLocationNames:(NSArray *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setAllowsPhotosDetailsInteraction:(BOOL)arg1 ;
-(_PXAlbumSectionHeaderLayout *)weakLayout;
-(void)setGradientOverhang:(double)arg1 ;
-(void)setWeakLayout:(_PXAlbumSectionHeaderLayout *)arg1 ;
-(void)setGradientAlpha:(double)arg1 ;
-(double)gradientOverhang;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(NSString *)backdropViewGroupName;
-(double)gradientAlpha;
-(UIImage *)gradientImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

