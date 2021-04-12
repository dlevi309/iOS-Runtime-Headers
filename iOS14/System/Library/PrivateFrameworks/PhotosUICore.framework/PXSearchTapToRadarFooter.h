/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface PXSearchTapToRadarFooter : UICollectionReusableView {

	/*^block*/id _tapToRadarHandler;
	UILabel* _tapToRadarAppleInternalLabel;
	UILabel* _tapToRadarDescriptionLabel;

}

@property (nonatomic,retain) UILabel * tapToRadarAppleInternalLabel;              //@synthesize tapToRadarAppleInternalLabel=_tapToRadarAppleInternalLabel - In the implementation block
@property (nonatomic,retain) UILabel * tapToRadarDescriptionLabel;                //@synthesize tapToRadarDescriptionLabel=_tapToRadarDescriptionLabel - In the implementation block
@property (nonatomic,copy) id tapToRadarHandler;                                  //@synthesize tapToRadarHandler=_tapToRadarHandler - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)_didSelectTapToRadarButton;
-(void)shouldDisplayRadarDescriptionLabel:(BOOL)arg1 ;
-(id)tapToRadarHandler;
-(void)setTapToRadarHandler:(id)arg1 ;
-(UILabel *)tapToRadarAppleInternalLabel;
-(void)setTapToRadarAppleInternalLabel:(UILabel *)arg1 ;
-(UILabel *)tapToRadarDescriptionLabel;
-(void)setTapToRadarDescriptionLabel:(UILabel *)arg1 ;
@end

