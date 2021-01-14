/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(BRCItemID *)itemID;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToItemGlobalID:(id)arg1 ;
-(BRCZoneRowID *)zoneRowID;
-(id)initWithZoneRowID:(id)arg1 itemID:(id)arg2 ;
@end

