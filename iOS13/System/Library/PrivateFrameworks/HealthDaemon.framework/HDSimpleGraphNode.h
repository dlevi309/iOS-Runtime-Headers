/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSString, NSMutableArray;

@interface HDSimpleGraphNode : HDSimpleGraphObject {

	BOOL _areAllRelationshipsLoaded;
	BOOL _areAttributesLoaded;
	NSString* _name;
	NSMutableArray* _relationships;
	NSMutableArray* _attributes;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (assign,nonatomic) BOOL areAllRelationshipsLoaded;              //@synthesize areAllRelationshipsLoaded=_areAllRelationshipsLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributes;                 //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL areAttributesLoaded;                    //@synthesize areAttributesLoaded=_areAttributesLoaded - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relationships;
-(BOOL)work_loadAllRelationshipsWithMaxDepth:(long long)arg1 error:(id*)arg2 ;
-(void)setRelationships:(NSMutableArray *)arg1 ;
-(BOOL)_work_loadRelatedNodesRecursiveForRelationships:(id)arg1 maxDepth:(long long)arg2 currentDepth:(long long)arg3 fetchType:(long long)arg4 error:(id*)arg5 ;
-(BOOL)work_loadRelationships:(id)arg1 maxDepth:(long long)arg2 fetchType:(long long)arg3 error:(id*)arg4 ;
-(BOOL)work_loadAttributesWithError:(id*)arg1 ;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 shouldLoadRelationships:(BOOL)arg4 ;
-(BOOL)work_addAttribute:(id)arg1 ofType:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
-(BOOL)work_addAttribute:(id)arg1 ofType:(id)arg2 forKeyID:(long long)arg3 error:(id*)arg4 ;
-(id)work_attributesWithError:(id*)arg1 ;
-(BOOL)areAllRelationshipsLoaded;
-(void)setAreAllRelationshipsLoaded:(BOOL)arg1 ;
-(BOOL)areAttributesLoaded;
-(void)setAreAttributesLoaded:(BOOL)arg1 ;
@end

