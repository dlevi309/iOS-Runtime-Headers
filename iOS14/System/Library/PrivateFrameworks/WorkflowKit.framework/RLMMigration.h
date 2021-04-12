/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class RLMRealm, RLMSchema;

@interface RLMMigration : NSObject {

	Schema* _schema;
	unordered_map<NSString *, realm::IndexSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, realm::IndexSet> > >* _deletedObjectIndices;
	RLMRealm* _oldRealm;
	RLMRealm* _realm;

}

@property (nonatomic,retain) RLMRealm * oldRealm;                  //@synthesize oldRealm=_oldRealm - In the implementation block
@property (nonatomic,retain) RLMRealm * realm;                     //@synthesize realm=_realm - In the implementation block
@property (nonatomic,readonly) RLMSchema * oldSchema; 
@property (nonatomic,readonly) RLMSchema * newSchema; 
-(RLMRealm *)realm;
-(void)execute:(/*^block*/id)arg1 ;
-(id)createObject:(id)arg1 withValue:(id)arg2 ;
-(void)deleteObject:(id)arg1 ;
-(RLMSchema *)oldSchema;
-(RLMSchema *)newSchema;
-(void)setRealm:(RLMRealm *)arg1 ;
-(RLMRealm *)oldRealm;
-(void)deleteObjectsMarkedForDeletion;
-(id)initWithRealm:(id)arg1 oldRealm:(id)arg2 schema:(Schema*)arg3 ;
-(void)enumerateObjects:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)createObject:(id)arg1 withObject:(id)arg2 ;
-(BOOL)deleteDataForClassName:(id)arg1 ;
-(void)renamePropertyForClass:(id)arg1 oldName:(id)arg2 newName:(id)arg3 ;
-(void)setOldRealm:(RLMRealm *)arg1 ;
@end

