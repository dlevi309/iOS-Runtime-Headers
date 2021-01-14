/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UILabel;

@interface PHPlaceholderView : UIView {

	long long _type;
	UIView* __container;
	UIImageView* __imageView;
	UILabel* __airPlayLabel;
	UILabel* __appleTVMessageLabel;

}

@property (setter=_setContainer:,nonatomic,retain) UIView * _container;                                   //@synthesize _container=__container - In the implementation block
@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;                              //@synthesize _imageView=__imageView - In the implementation block
@property (setter=_setAirPlayLabel:,nonatomic,retain) UILabel * _airPlayLabel;                            //@synthesize _airPlayLabel=__airPlayLabel - In the implementation block
@property (setter=_setAppleTVMessageLabel:,nonatomic,retain) UILabel * _appleTVMessageLabel;              //@synthesize _appleTVMessageLabel=__appleTVMessageLabel - In the implementation block
@property (nonatomic,readonly) long long type;                                                            //@synthesize type=_type - In the implementation block
-(UIView *)_container;
-(id)initWithType:(long long)arg1 ;
-(UIImageView *)_imageView;
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContainer:(id)arg1 ;
-(id)_appleTVMessage;
-(void)_setImageView:(id)arg1 ;
-(UILabel *)_airPlayLabel;
-(void)_setAirPlayLabel:(id)arg1 ;
-(UILabel *)_appleTVMessageLabel;
-(void)_setAppleTVMessageLabel:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
@end

