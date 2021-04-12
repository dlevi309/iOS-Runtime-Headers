/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIBarButtonItemAppearance *)backButtonAppearance;
-(void)setBackButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)setButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(UIBarButtonItemAppearance *)buttonAppearance;
-(UIImage *)backIndicatorTransitionMaskImage;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(id)_barTitleData;
-(UIBarButtonItemAppearance *)doneButtonAppearance;
-(void)setDoneButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(id)_plainButtonAppearanceData;
-(id)_backButtonAppearance;
-(void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(void)_describeInto:(id)arg1 ;
-(UIImage *)backIndicatorImage;
-(NSDictionary *)largeTitleTextAttributes;
-(void)_barButtonItemDataChanged:(id)arg1 ;
-(id)_doneButtonAppearanceData;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(id)_backButtonAppearanceData;
-(void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3 ;
-(void)_completeInit;
-(void)_decodeFromCoder:(id)arg1 ;
-(void)_setupDefaults;
-(id)_plainButtonAppearance;
-(id)_doneButtonAppearance;
-(void)_copyFromAppearance:(id)arg1 ;
@end

