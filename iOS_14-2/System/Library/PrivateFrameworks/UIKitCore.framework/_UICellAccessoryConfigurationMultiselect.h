/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class UIColor;

@interface _UICellAccessoryConfigurationMultiselect : _UICellAccessoryConfiguration {

	UIColor* _selectedTintColor;

}

@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) UIColor * selectedTintColor;              //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)_identifier;
-(id)initWithCoder:(id)arg1 ;
-(long long)_systemType;
-(UIColor *)selectedTintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
@end

