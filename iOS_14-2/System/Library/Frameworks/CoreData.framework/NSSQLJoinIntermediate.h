/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {

	NSSQLRelationship* _relationship;
	NSString* _sourceAlias;
	NSString* _destinationAlias;
	NSString* _correlationAlias;
	unsigned long long _type;
	BOOL _direct;

}
+(id)createManyToManyJoinIntermediateForProperty:(id)arg1 direct:(BOOL)arg2 lastStep:(id)arg3 inScope:(id)arg4 context:(id)arg5 ;
+(id)createJoinIntermediatesForKeypath:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 forScope:(id)arg4 inStatementIntermediate:(id)arg5 inContext:(id)arg6 ;
+(id)createToManyJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4 ;
+(id)createToOneJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4 ;
-(id)sourceEntity;
-(id)destinationEntity;
-(id)initForRelationship:(id)arg1 sourceAlias:(id)arg2 destinationAlias:(id)arg3 correlationAlias:(id)arg4 direct:(BOOL)arg5 inScope:(id)arg6 ;
-(BOOL)isDirect;
-(id)_generateToManySQLStringInContext:(id)arg1 ;
-(id)relationship;
-(void)setDirect:(BOOL)arg1 ;
-(id)correlationAlias;
-(id)sourceAlias;
-(id)description;
-(BOOL)joinType;
-(void)setJoinType:(unsigned long long)arg1 ;
-(id)destinationAlias;
-(void)setSourceAlias:(id)arg1 ;
-(void)setDestinationAlias:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateManyToManySQLStringInContext:(id)arg1 ;
-(id)_generateToOneSQLStringInContext:(id)arg1 ;
-(void)dealloc;
@end

