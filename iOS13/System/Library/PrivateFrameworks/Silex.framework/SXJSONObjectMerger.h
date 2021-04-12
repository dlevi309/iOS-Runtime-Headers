/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXJSONObjectMergerClassProviding;
@class NSArray, NSMutableDictionary;

@interface SXJSONObjectMerger : NSObject {

	id<SXJSONObjectMergerClassProviding> _classProvider;
	NSArray* _exclusionKeys;
	NSMutableDictionary* _transformers;

}

@property (nonatomic,readonly) id<SXJSONObjectMergerClassProviding> classProvider;              //@synthesize classProvider=_classProvider - In the implementation block
@property (nonatomic,readonly) NSArray * exclusionKeys;                                         //@synthesize exclusionKeys=_exclusionKeys - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * transformers;                              //@synthesize transformers=_transformers - In the implementation block
-(NSMutableDictionary *)transformers;
-(id)initWithObjectClass:(Class)arg1 exclusionKeys:(id)arg2 ;
-(id)initWithClassProvider:(id)arg1 exclusionKeys:(id)arg2 ;
-(id)mergeObjects:(id)arg1 ;
-(void)addTransformer:(id)arg1 keyPath:(id)arg2 ;
-(id)mergeDictionary:(id)arg1 withDictionary:(id)arg2 keyPath:(id)arg3 ;
-(id<SXJSONObjectMergerClassProviding>)classProvider;
-(id)appendKey:(id)arg1 keyPath:(id)arg2 ;
-(void)transformObject:(id)arg1 otherObject:(id)arg2 transformer:(id)arg3 key:(id)arg4 keyPath:(id)arg5 dictionary:(id)arg6 ;
-(NSArray *)exclusionKeys;
-(void)removeTransformerForKeyPath:(id)arg1 ;
-(id)replaceLastKeyOfKeyPath:(id)arg1 withKey:(id)arg2 ;
@end

