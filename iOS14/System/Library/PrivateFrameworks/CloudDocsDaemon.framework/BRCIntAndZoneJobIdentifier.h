/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCJobIdentifying.h>

@class BRCZoneRowID, NSString;

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying> {

	long long _intID;
	BRCZoneRowID* _zoneRowID;

}

@property (nonatomic,readonly) long long intID;                       //@synthesize intID=_intID - In the implementation block
@property (nonatomic,readonly) BRCZoneRowID * zoneRowID;              //@synthesize zoneRowID=_zoneRowID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)columns;
-(long long)intID;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BRCZoneRowID *)zoneRowID;
-(id)matchingJobsWhereSQLClause;
-(id)columnsValues;
-(id)jobsDescription;
-(id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2 ;
-(BOOL)isEqualToIntAndZoneJobIdentifier:(id)arg1 ;
@end

