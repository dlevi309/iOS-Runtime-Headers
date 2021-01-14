/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class UIColor, UIImage;

@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration {

	BOOL _cellSelectionTogglesExpansionState;
	double _rotationAngle;
	UIColor* _selectedTintColor;
	UIImage* __customImage;

}

@property (nonatomic,readonly) UIImage * _customImage;                               //@synthesize _customImage=__customImage - In the implementation block
@property (nonatomic,readonly) BOOL cellSelectionTogglesExpansionState;              //@synthesize cellSelectionTogglesExpansionState=_cellSelectionTogglesExpansionState - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double rotationAngle;                                   //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,retain) UIColor * selectedTintColor;                            //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(id)initWithCellSelectionTogglesExpansionState:(BOOL)arg1 ;
-(id)_identifier;
-(UIImage *)_customImage;
-(id)initWithCoder:(id)arg1 ;
-(long long)_systemType;
-(UIColor *)selectedTintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
-(BOOL)cellSelectionTogglesExpansionState;
@end

