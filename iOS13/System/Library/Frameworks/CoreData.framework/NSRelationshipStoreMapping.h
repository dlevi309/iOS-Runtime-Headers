/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)relationship;
-(id)columnDefinitions;
-(id)constraintDefinitions;
-(void)setDestinationEntityExternalName:(id)arg1 ;
-(void)setForeignKeys:(id)arg1 ;
-(void)setJoins:(id)arg1 ;
-(id)destinationEntityExternalName;
-(id)foreignKeys;
-(id)joins;
-(unsigned)joinSemantic;
-(void)setJoinSemantic:(unsigned)arg1 ;
@end

