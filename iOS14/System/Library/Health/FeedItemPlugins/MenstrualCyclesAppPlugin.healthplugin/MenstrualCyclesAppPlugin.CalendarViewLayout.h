/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface MenstrualCyclesAppPlugin.CalendarViewLayout : UICollectionViewFlowLayout {

	 numberOfDaysPerWeek;
	 overlayAttributes;
	 overlayFrame;

}
+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

