/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKKeyValueDomain;

@interface WDUserDefaults : NSObject {

	HKKeyValueDomain* _keyValueDomain;

}

@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;              //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
-(id)initWithHealthStore:(id)arg1 ;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HKKeyValueDomain *)keyValueDomain;
-(void)valueForKey:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

