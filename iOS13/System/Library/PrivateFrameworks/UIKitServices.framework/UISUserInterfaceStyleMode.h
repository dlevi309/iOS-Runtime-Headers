/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setModeValue:(long long)arg1 ;
-(void)setOverride:(SCD_Struct_UI0)arg1 ;
-(long long)modeValue;
-(SCD_Struct_UI0)override;
-(SCD_Struct_UI1)customSchedule;
-(void)_setOverride:(SCD_Struct_UI0)arg1 force:(BOOL)arg2 ;
-(id)_commonAnalyticsEventDictionary;
-(long long)suggestedAutomaticModeValue;
-(void)setCustomSchedule:(SCD_Struct_UI1)arg1 ;
@end

