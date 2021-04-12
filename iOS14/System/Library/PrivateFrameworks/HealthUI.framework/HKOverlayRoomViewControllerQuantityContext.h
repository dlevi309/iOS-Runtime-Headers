/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContext.h>

@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;
@class NSString;

@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext {

	NSString* _quantityTypeIdentifier;
	id<HKOverlayRoomViewControllerIntegratedContextDelegate> _optionalDelegate;
	long long _options;

}

@property (nonatomic,retain) NSString * quantityTypeIdentifier;                                                             //@synthesize quantityTypeIdentifier=_quantityTypeIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;              //@synthesize optionalDelegate=_optionalDelegate - In the implementation block
@property (assign,nonatomic) long long options;                                                                             //@synthesize options=_options - In the implementation block
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id<HKOverlayRoomViewControllerIntegratedContextDelegate>)optionalDelegate;
-(id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)representativeDisplayType;
-(id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4 ;
-(id)buildOverlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOptionalDelegate:(id<HKOverlayRoomViewControllerIntegratedContextDelegate>)arg1 ;
-(NSString *)quantityTypeIdentifier;
-(id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)initWithQuantityIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6 ;
-(void)setQuantityTypeIdentifier:(NSString *)arg1 ;
@end

