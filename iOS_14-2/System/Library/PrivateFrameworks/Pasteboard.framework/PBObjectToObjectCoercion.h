/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToObjectCoercion : NSObject {

	Class _theClass;
	NSMutableDictionary* _blockByClass;
	NSMutableOrderedSet* _orderedClassNames;

}

@property (nonatomic,retain) Class theClass;                                       //@synthesize theClass=_theClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blockByClass;                   //@synthesize blockByClass=_blockByClass - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * orderedClassNames;              //@synthesize orderedClassNames=_orderedClassNames - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(void)addCoercionToClass:(Class)arg1 block:(/*^block*/id)arg2 ;
-(id)availableClasses;
-(BOOL)canCoerceToObjectOfClass:(Class)arg1 ;
-(id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id*)arg3 ;
-(Class)theClass;
-(void)setTheClass:(Class)arg1 ;
-(NSMutableDictionary *)blockByClass;
-(void)setBlockByClass:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)orderedClassNames;
-(void)setOrderedClassNames:(NSMutableOrderedSet *)arg1 ;
@end

