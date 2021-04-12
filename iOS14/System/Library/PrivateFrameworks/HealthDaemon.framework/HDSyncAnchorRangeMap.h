/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _anchorRangesByEntityIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * anchorRangesByEntityIdentifier;              //@synthesize anchorRangesByEntityIdentifier=_anchorRangesByEntityIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)codableSyncAnchorRangeMap;
-(id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)anchorRangeCount;
-(BOOL)getAnchorRange:(HDSyncAnchorRange*)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(void)setAnchorRange:(HDSyncAnchorRange)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(void)setAnchorRangesByEntityIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)anchorRangesByEntityIdentifier;
@end

