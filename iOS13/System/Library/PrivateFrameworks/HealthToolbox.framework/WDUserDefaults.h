/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKKeyValueDomain;

@interface WDUserDefaults : NSObject {

	HKKeyValueDomain* _keyValueDomain;

}

@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;              //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
-(id)initWithHealthStore:(id)arg1 ;
-(HKKeyValueDomain *)keyValueDomain;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)valueForKey:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

