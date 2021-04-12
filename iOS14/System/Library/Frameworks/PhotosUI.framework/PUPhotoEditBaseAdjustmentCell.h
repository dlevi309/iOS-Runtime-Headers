/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell {

	NSString* _imageName;
	BOOL _enabled;
	BOOL _isUserModifying;
	PUPhotoEditAdjustmentControl* _containerButton;

}

@property (nonatomic,retain) PUPhotoEditAdjustmentControl * containerButton;              //@synthesize containerButton=_containerButton - In the implementation block
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double defaultValue; 
@property (assign,nonatomic) double identityValue; 
@property (assign,nonatomic) double minValue; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,retain) NSString * imageName;                                        //@synthesize imageName=_imageName - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isUserModifying;                                        //@synthesize isUserModifying=_isUserModifying - In the implementation block
-(void)setMaxValue:(double)arg1 ;
-(void)setDefaultValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)defaultValue;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIsUserModifying:(BOOL)arg1 ;
-(void)setIdentityValue:(double)arg1 ;
-(void)resetToDefault;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setValue:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)isUserModifying;
-(PUPhotoEditAdjustmentControl *)containerButton;
-(void)_setupContainerButton;
-(void)setContainerButton:(PUPhotoEditAdjustmentControl *)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(double)identityValue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(double)maxValue;
-(double)minValue;
-(double)value;
@end

