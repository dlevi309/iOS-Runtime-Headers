/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding> {

	NSMutableDictionary* _anchorRangesByEntityIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * anchorRangesByEntityIdentifier;              //@synthesize anchorRangesByEntityIdentifier=_anchorRangesByEntityIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)codableSyncAnchorRangeMap;
-(id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)anchorRangeCount;
-(BOOL)getAnchorRange:(HDSyncAnchorRange*)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(void)setAnchorRange:(HDSyncAnchorRange)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)anchorRangesByEntityIdentifier;
-(void)setAnchorRangesByEntityIdentifier:(NSMutableDictionary *)arg1 ;
@end

