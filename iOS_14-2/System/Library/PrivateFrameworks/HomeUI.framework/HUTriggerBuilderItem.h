/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFTriggerBuilder;

@interface HUTriggerBuilderItem : HFItem <NSCopying> {

	HFTriggerBuilder* _triggerBuilder;
	unsigned long long _nameType;

}

@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long nameType;                    //@synthesize nameType=_nameType - In the implementation block
+(id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)arg1 inHome:(id)arg2 ;
+(id)settingsURLForForceDisableReasons:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)nameType;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_triggerType;
-(id)initWithTriggerBuilder:(id)arg1 nameType:(unsigned long long)arg2 ;
-(id)_resultsForTriggerConditions;
-(id)_forceDisableReasons;
@end

