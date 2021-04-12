/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMHome, HMTrigger, NSString;

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol> {

	HMHome* _home;
	HMTrigger* _trigger;

}

@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMTrigger * trigger;                            //@synthesize trigger=_trigger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(HMHome *)home;
-(HMTrigger *)trigger;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 trigger:(id)arg2 ;
@end

