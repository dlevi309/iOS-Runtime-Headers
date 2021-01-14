/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPropertyStoreMapping.h>

@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {

	NSString* _destinationEntityExternalName;
	NSArray* _foreignKeys;
	NSArray* _joins;
	unsigned _joinSemantic;

}
-(id)foreignKeys;
-(id)relationship;
-(unsigned)joinSemantic;
-(void)setJoinSemantic:(unsigned)arg1 ;
-(void)setForeignKeys:(id)arg1 ;
-(void)setDestinationEntityExternalName:(id)arg1 ;
-(id)destinationEntityExternalName;
-(void)setJoins:(id)arg1 ;
-(id)constraintDefinitions;
-(id)columnDefinitions;
-(id)joins;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

