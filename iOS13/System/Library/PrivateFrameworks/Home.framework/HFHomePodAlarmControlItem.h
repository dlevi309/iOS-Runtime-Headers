/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@protocol HFMediaProfileContainer;
@class HFHomeKitSettingsValueManager;

@interface HFHomePodAlarmControlItem : HFControlItem {

	id<HFMediaProfileContainer> _mediaProfileContainer;

}

@property (nonatomic,readonly) HFHomeKitSettingsValueManager * valueManager; 
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
+(Class)valueClass;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)readValueAndPopulateStandardResults;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(HFHomeKitSettingsValueManager *)valueManager;
-(id)initWithMediaProfileContainer:(id)arg1 displayResults:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg1 ;
@end

