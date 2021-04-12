/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBarAppearance.h>
#import <UIKitCore/_UIBarButtonItemAppearanceChangeObserver.h>

@class _UINavTitleAppearanceData, UIBarButtonItemAppearance, NSDictionary, UIImage, NSString;

@interface UINavigationBarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {

	_UINavTitleAppearanceData* _barTitleData;
	UIBarButtonItemAppearance* _buttonAppearance;
	UIBarButtonItemAppearance* _doneButtonAppearance;
	UIBarButtonItemAppearance* _backButtonAppearance;

}

@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) NSDictionary * largeTitleTextAttributes; 
@property (nonatomic,copy) UIBarButtonItemAppearance * buttonAppearance;                  //@synthesize buttonAppearance=_buttonAppearance - In the implementation block
@property (nonatomic,copy) UIBarButtonItemAppearance * doneButtonAppearance;              //@synthesize doneButtonAppearance=_doneButtonAppearance - In the implementation block
@property (nonatomic,copy) UIBarButtonItemAppearance * backButtonAppearance;              //@synthesize backButtonAppearance=_backButtonAppearance - In the implementation block
@property (nonatomic,readonly) UIImage * backIndicatorImage; 
@property (nonatomic,readonly) UIImage * backIndicatorTransitionMaskImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setupDefaults;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg1 ;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(void)_describeInto:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 ;
-(id)_barTitleData;
-(id)_backButtonAppearanceData;
-(id)_plainButtonAppearanceData;
-(id)_doneButtonAppearanceData;
-(id)_backButtonAppearance;
-(id)_plainButtonAppearance;
-(id)_doneButtonAppearance;
-(UIImage *)backIndicatorImage;
-(UIImage *)backIndicatorTransitionMaskImage;
-(UIBarButtonItemAppearance *)backButtonAppearance;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)largeTitleTextAttributes;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)setBackButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3 ;
-(void)_barButtonItemDataChanged:(id)arg1 ;
-(void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(void)setButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(void)setDoneButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(UIBarButtonItemAppearance *)buttonAppearance;
-(UIBarButtonItemAppearance *)doneButtonAppearance;
@end

