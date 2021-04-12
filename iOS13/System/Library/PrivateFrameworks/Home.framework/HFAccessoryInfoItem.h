/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem {

	unsigned long long _infoType;
	HMAccessory* _accessory;

}

@property (nonatomic,retain) HMAccessory * accessory;                  //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic) unsigned long long infoType;              //@synthesize infoType=_infoType - In the implementation block
+(id)localizedStringForCharacteristic:(id)arg1 ;
-(id)init;
-(unsigned long long)infoType;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2 ;
-(void)setInfoType:(unsigned long long)arg1 ;
@end

