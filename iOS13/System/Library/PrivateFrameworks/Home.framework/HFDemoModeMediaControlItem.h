/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>
#import <libobjc.A.dylib/HFTogglableControlItem.h>

@class HFNullValueSource, HMAccessory, NSString;

@interface HFDemoModeMediaControlItem : HFControlItem <HFTogglableControlItem> {

	HFNullValueSource* _mediaValueSource;
	HMAccessory* _accessory;

}

@property (nonatomic,readonly) HFNullValueSource * mediaValueSource;              //@synthesize mediaValueSource=_mediaValueSource - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)toggleValue;
-(id)readValueAndPopulateStandardResults;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(id)initWithDisplayResults:(id)arg1 ;
-(HFNullValueSource *)mediaValueSource;
@end

