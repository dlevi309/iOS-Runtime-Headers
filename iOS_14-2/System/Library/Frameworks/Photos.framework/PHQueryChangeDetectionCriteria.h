/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {

	NSMutableDictionary* _attributeIndexValuesByEntityName;
	NSMutableDictionary* _relationshipIndexValuesByEntityName;

}
-(id)init;
-(id)initWithPLQueryChangeDetectionCriteria:(id)arg1 ;
-(id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)arg1 ;
-(void)enumerateEntitiesAndAttributeIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntitiesAndRelationshipIndexesBlock:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

