/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {

	NSMutableDictionary* _attributeIndexValuesByEntityName;
	NSMutableDictionary* _relationshipIndexValuesByEntityName;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPLQueryChangeDetectionCriteria:(id)arg1 ;
-(void)enumerateEntitiesAndAttributeIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntitiesAndRelationshipIndexesBlock:(/*^block*/id)arg1 ;
@end

