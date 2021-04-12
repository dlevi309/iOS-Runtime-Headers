/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

