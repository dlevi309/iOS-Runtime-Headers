/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)selectable;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 selectable:(BOOL)arg2 ;
@end

