/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSQLAttributeExtension.h>

@class NSString, NSArray, NSSQLEntity, NSSQLAttribute, NSSQLRelationship;

@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension> {

	id _objectFromUserInfo;
	NSString* _keypath;
	NSArray* _insertSQLStrings;
	NSArray* _dropSQLStrings;
	NSArray* _bulkUpdateSQLStrings;
	NSSQLEntity* _entity;
	NSSQLAttribute* _attribute;
	NSSQLRelationship* _countedRelationship;

}

@property (nonatomic,readonly) id objectFromUserInfo;                                //@synthesize objectFromUserInfo=_objectFromUserInfo - In the implementation block
@property (nonatomic,readonly) NSString * keypath;                                   //@synthesize keypath=_keypath - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * entity;                                 //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) NSSQLAttribute * attribute;                           //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,readonly) NSSQLRelationship * countedRelationship;              //@synthesize countedRelationship=_countedRelationship - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * insertSQLStrings;                           //@synthesize insertSQLStrings=_insertSQLStrings - In the implementation block
@property (nonatomic,readonly) NSArray * dropSQLStrings;                             //@synthesize dropSQLStrings=_dropSQLStrings - In the implementation block
@property (nonatomic,readonly) NSArray * bulkUpdateSQLStrings;                       //@synthesize bulkUpdateSQLStrings=_bulkUpdateSQLStrings - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(NSSQLAttribute *)attribute;
-(NSSQLEntity *)entity;
-(BOOL)validate:(id*)arg1 ;
-(void)generateSQLStrings;
-(id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3 ;
-(BOOL)isEqualToExtension:(id)arg1 ;
-(NSArray *)insertSQLStrings;
-(NSArray *)dropSQLStrings;
-(NSArray *)bulkUpdateSQLStrings;
-(BOOL)validateExpression:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAttribute:(id*)arg1 ;
-(BOOL)validateKeypath:(id*)arg1 ;
-(NSString *)keypath;
-(id)objectFromUserInfo;
-(NSSQLRelationship *)countedRelationship;
@end

