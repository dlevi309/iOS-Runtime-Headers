/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRCZoneRowID, BRCItemID;

@interface BRCItemGlobalID : NSObject <NSCopying> {

	BRCZoneRowID* _zoneRowID;
	BRCItemID* _itemID;

}

@property (nonatomic,readonly) BRCZoneRowID * zoneRowID;              //@synthesize zoneRowID=_zoneRowID - In the implementation block
@property (nonatomic,readonly) BRCItemID * itemID;                    //@synthesize itemID=_itemID - In the implementation block
+(id)itemGlobalIDFromLocalItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRCItemID *)itemID;
-(BOOL)isEqualToItemGlobalID:(id)arg1 ;
-(BRCZoneRowID *)zoneRowID;
-(id)initWithZoneRowID:(id)arg1 itemID:(id)arg2 ;
@end

