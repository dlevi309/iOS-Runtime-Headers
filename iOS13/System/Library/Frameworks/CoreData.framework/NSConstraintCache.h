/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSArray, NSEntityDescription, NSMutableDictionary, NSMutableArray;

@interface NSConstraintCache : NSObject {

	NSArray* _constraint;
	NSArray* _extension;
	NSEntityDescription* _entity;
	NSMutableDictionary* _knownValues;
	NSMutableArray* _children;

}

@property (nonatomic,retain,readonly) NSArray * constraint;               //@synthesize constraint=_constraint - In the implementation block
@property (nonatomic,retain,readonly) NSArray * extension;                //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,retain,readonly) NSArray * children;                 //@synthesize children=_children - In the implementation block
+(void)createCachesForEntity:(id)arg1 forValidator:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(NSEntityDescription *)entity;
-(NSArray *)children;
-(NSArray *)extension;
-(NSArray *)constraint;
-(void)registerObject:(id)arg1 ;
-(id)validateForSave:(id)arg1 ;
-(BOOL)_constraint:(id)arg1 extends:(id)arg2 ;
-(BOOL)_alreadyHasChildForEntity:(id)arg1 constraint:(id)arg2 ;
-(id)initForEntity:(id)arg1 constraint:(id)arg2 extension:(id)arg3 ;
-(void)_addChild:(id)arg1 ;
-(void)extendConstraint:(id)arg1 onParentEntity:(id)arg2 parentCache:(id)arg3 ;
-(id)keyForValues:(id)arg1 ;
-(void)registerObject:(id)arg1 forValues:(id)arg2 ;
-(BOOL)_intraStoreConflictsExistForValues:(id)arg1 ;
@end

