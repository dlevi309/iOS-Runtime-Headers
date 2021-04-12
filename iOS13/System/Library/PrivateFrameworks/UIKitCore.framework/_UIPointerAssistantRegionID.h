/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPointerRegion *)region;
-(_UIAssistantEntry *)assistant;
-(id)initWithRegion:(id)arg1 assistant:(id)arg2 ;
@end

