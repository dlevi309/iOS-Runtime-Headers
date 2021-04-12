/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToObjectCoercion : NSObject {

	Class _theClass;
	NSMutableDictionary* _blockByClass;
	NSMutableOrderedSet* _classOrder;

}

@property (nonatomic,retain) Class theClass;                                  //@synthesize theClass=_theClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blockByClass;              //@synthesize blockByClass=_blockByClass - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * classOrder;                //@synthesize classOrder=_classOrder - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(void)addCoercionToClass:(Class)arg1 block:(/*^block*/id)arg2 ;
-(id)availableClasses;
-(BOOL)canCoerceToObjectOfClass:(Class)arg1 ;
-(id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id*)arg3 ;
-(Class)theClass;
-(void)setTheClass:(Class)arg1 ;
-(NSMutableDictionary *)blockByClass;
-(void)setBlockByClass:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)classOrder;
-(void)setClassOrder:(NSMutableOrderedSet *)arg1 ;
@end

