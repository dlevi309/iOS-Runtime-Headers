/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIBarAppearance.h>
#import <UIKitCore/_UIBarButtonItemAppearanceChangeObserver.h>

@class UIBarButtonItemAppearance, NSString;

@interface UIToolbarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {

	UIBarButtonItemAppearance* _buttonAppearance;
	UIBarButtonItemAppearance* _doneButtonAppearance;

}

@property (nonatomic,copy) UIBarButtonItemAppearance * buttonAppearance;                  //@synthesize buttonAppearance=_buttonAppearance - In the implementation block
@property (nonatomic,copy) UIBarButtonItemAppearance * doneButtonAppearance;              //@synthesize doneButtonAppearance=_doneButtonAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(UIBarButtonItemAppearance *)buttonAppearance;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(UIBarButtonItemAppearance *)doneButtonAppearance;
-(void)setDoneButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(id)_plainButtonAppearanceData;
-(void)_describeInto:(id)arg1 ;
-(void)_barButtonItemDataChanged:(id)arg1 ;
-(id)_doneButtonAppearanceData;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3 ;
-(void)_completeInit;
-(void)_decodeFromCoder:(id)arg1 ;
-(void)_setupDefaults;
-(id)_plainButtonAppearance;
-(id)_doneButtonAppearance;
-(void)_copyFromAppearance:(id)arg1 ;
@end

