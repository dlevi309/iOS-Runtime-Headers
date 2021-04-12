/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSyncAnchorMap.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding, NSCopying> {

	NSMutableDictionary* _anchorsByEntityIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * anchorsByEntityIdentifier;              //@synthesize anchorsByEntityIdentifier=_anchorsByEntityIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)anchorCount;
-(void)setAnchorsFromMap:(id)arg1 ;
-(void)enumerateAnchorsAndEntityIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2 ;
-(long long)anchorForSyncEntityClass:(Class)arg1 ;
-(long long)anchorForSyncEntityIdentifier:(id)arg1 ;
-(void)setAnchor:(long long)arg1 forSyncEntityIdentifier:(id)arg2 ;
-(id)anchorIfPresentForSyncEntityIdentifier:(id)arg1 ;
-(BOOL)isAllZero;
-(NSMutableDictionary *)anchorsByEntityIdentifier;
-(void)setAnchorsByEntityIdentifier:(NSMutableDictionary *)arg1 ;
@end

