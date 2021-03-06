/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSMutableArray, NSString, NSArray;

@interface HDSimpleGraphNode : HDSimpleGraphObject {

	NSMutableArray* _attributes;
	BOOL _areAttributesLoaded;
	BOOL _areAllRelationshipsLoaded;
	NSString* _name;
	NSArray* _relationships;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * relationships;                     //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,readonly) BOOL areAllRelationshipsLoaded;              //@synthesize areAllRelationshipsLoaded=_areAllRelationshipsLoaded - In the implementation block
@property (nonatomic,readonly) NSArray * attributes; 
+(id)nodeWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 loadAttributes:(BOOL)arg4 loadRelationshipsWithDepth:(long long)arg5 error:(id*)arg6 ;
-(id)init;
-(NSArray *)relationships;
-(NSString *)name;
-(NSArray *)attributes;
-(id)description;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 attributes:(id)arg4 relationships:(id)arg5 ;
-(BOOL)work_loadAttributesWithError:(id*)arg1 ;
-(BOOL)work_loadAllRelationshipsWithMaxDepth:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_work_loadRelatedNodesRecursiveForRelationships:(id)arg1 maxDepth:(long long)arg2 currentDepth:(long long)arg3 fetchType:(long long)arg4 error:(id*)arg5 ;
-(BOOL)work_loadRelationships:(id)arg1 maxDepth:(long long)arg2 fetchType:(long long)arg3 error:(id*)arg4 ;
-(BOOL)work_addAttribute:(id)arg1 ofType:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
-(BOOL)work_addAttribute:(id)arg1 ofType:(id)arg2 forKeyID:(long long)arg3 error:(id*)arg4 ;
-(id)work_attributesWithError:(id*)arg1 ;
-(BOOL)areAllRelationshipsLoaded;
@end

