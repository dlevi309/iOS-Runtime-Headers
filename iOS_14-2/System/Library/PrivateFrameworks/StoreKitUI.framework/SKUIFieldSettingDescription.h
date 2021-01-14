/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISettingDescription.h>
#import <libobjc.A.dylib/SKUIControllableSettingDescription.h>

@class SKUISettingsGroupController, NSMutableDictionary, NSString;

@interface SKUIFieldSettingDescription : SKUISettingDescription <SKUIControllableSettingDescription> {

	SKUISettingsGroupController* _controller;
	long long _fieldType;
	NSMutableDictionary* _fieldValues;

}

@property (nonatomic,readonly) long long fieldType; 
@property (assign,nonatomic,__weak) SKUISettingsGroupController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_viewClassForSettingDescription:(id)arg1 ;
+(long long)_fieldTypeFromElement:(id)arg1 ;
+(id)_inputViewElementFromElement:(id)arg1 ;
-(void)setController:(SKUISettingsGroupController *)arg1 ;
-(long long)fieldType;
-(BOOL)allowsSelection;
-(SKUISettingsGroupController *)controller;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)setFieldValue:(id)arg1 forKey:(id)arg2 ;
-(id)fieldValueForKey:(id)arg1 ;
-(void)_dispatchEventOfType:(unsigned long long)arg1 extraInfo:(id)arg2 ;
@end

