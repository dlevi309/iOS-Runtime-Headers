/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)_accessibilityUserTestingElementBaseType;
-(long long)sliderType;
-(NSString *)selectedDescription;
-(id)_axContainingCollectionView;
-(long long)_axContainingSelectedItem;
-(void)setSelectedDescription:(NSString *)arg1 ;
-(void)setSliderType:(long long)arg1 ;
@end

