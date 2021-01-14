/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSString, MAIndexCache, MAFloatVector, NSArray;

@interface MASeries : NSObject {

	NSString* _name;
	MAIndexCache* _indexCache;
	MAFloatVector* _vector;

}

@property (nonatomic,readonly) MAIndexCache * indexCache;                //@synthesize indexCache=_indexCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels; 
@property (nonatomic,copy,readonly) MAFloatVector * vector;              //@synthesize vector=_vector - In the implementation block
-(float)valueAtIndex:(long long)arg1 ;
-(NSArray *)labels;
-(MAFloatVector *)vector;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 indexCache:(id)arg2 vector:(id)arg3 ;
-(id)initWithName:(id)arg1 labels:(id)arg2 vector:(id)arg3 ;
-(id)valueForLabel:(id)arg1 ;
-(MAIndexCache *)indexCache;
@end

