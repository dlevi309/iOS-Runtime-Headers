/*
* Generated on Thursday, January 14, 2021 at 2:29:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/Memories.axbundle/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement {

	long long _sliderType;
	NSString* _selectedDescription;

}

@property (assign,nonatomic) long long sliderType;                        //@synthesize sliderType=_sliderType - In the implementation block
@property (nonatomic,retain) NSString * selectedDescription;              //@synthesize selectedDescription=_selectedDescription - In the implementation block
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(id)_accessibilityUserTestingElementBaseType;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(long long)sliderType;
-(NSString *)selectedDescription;
-(id)_axContainingCollectionView;
-(long long)_axContainingSelectedItem;
-(void)setSelectedDescription:(NSString *)arg1 ;
-(void)setSliderType:(long long)arg1 ;
@end

