/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSSet;


@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate; 
@property (nonatomic,copy,readonly) NSSet * affectedCharacteristics; 
@required
-(id)overrideValueForCharacteristic:(id)arg1;
-(NSSet *)affectedCharacteristics;
-(void)setCharacteristicWritingDelegate:(id)arg1;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)characteristicWritingDelegate;

@end

