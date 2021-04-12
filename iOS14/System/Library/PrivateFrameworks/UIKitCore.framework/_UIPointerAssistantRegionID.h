/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIPointerRegion, _UIAssistantEntry;

@interface _UIPointerAssistantRegionID : NSObject {

	UIPointerRegion* _region;
	_UIAssistantEntry* _assistant;

}

@property (nonatomic,readonly) UIPointerRegion * region;                   //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) _UIAssistantEntry * assistant;              //@synthesize assistant=_assistant - In the implementation block
-(_UIAssistantEntry *)assistant;
-(UIPointerRegion *)region;
-(id)initWithRegion:(id)arg1 assistant:(id)arg2 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

