/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMHome;

@interface HUMediaServiceErrorBannerItem : HFItem <NSCopying> {

	HMHome* _home;

}

@property (nonatomic,readonly) HMHome * home;              //@synthesize home=_home - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
@end

