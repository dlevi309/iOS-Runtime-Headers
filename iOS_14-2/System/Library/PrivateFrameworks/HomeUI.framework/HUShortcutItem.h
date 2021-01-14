/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFTriggerBuilder;

@interface HUShortcutItem : HFItem <NSCopying> {

	BOOL _selectable;
	HFTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) BOOL selectable;                                //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg1 selectable:(BOOL)arg2 ;
-(BOOL)selectable;
-(HFTriggerBuilder *)triggerBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

