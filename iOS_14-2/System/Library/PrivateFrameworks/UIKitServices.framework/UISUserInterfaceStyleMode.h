/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/


@protocol UISUserInterfaceStyleModeDelegate;
#import <UIKitServices/UIKitServices-Structs.h>
@interface UISUserInterfaceStyleMode : NSObject {

	id<UISUserInterfaceStyleModeDelegate> _delegate;
	BOOL _observingDefaults;

}

@property (assign,nonatomic) long long modeValue; 
@property (nonatomic,readonly) long long suggestedAutomaticModeValue; 
@property (assign,nonatomic) SCD_Struct_UI0 override; 
@property (assign,nonatomic) SCD_Struct_UI1 customSchedule; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCustomSchedule:(SCD_Struct_UI1)arg1 ;
-(SCD_Struct_UI0)override;
-(long long)modeValue;
-(SCD_Struct_UI1)customSchedule;
-(void)setModeValue:(long long)arg1 ;
-(id)_commonAnalyticsEventDictionary;
-(void)setOverride:(SCD_Struct_UI0)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_setOverride:(SCD_Struct_UI0)arg1 force:(BOOL)arg2 ;
-(long long)suggestedAutomaticModeValue;
-(void)dealloc;
@end

