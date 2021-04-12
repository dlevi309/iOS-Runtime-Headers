/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSMutableDictionary;

@interface NURenderTagGroup : NSObject {

	NSMutableDictionary* _tags;
	NSMutableDictionary* _children;
	NURenderTagGroup* _parent;

}

@property (__weak) NURenderTagGroup * parent;              //@synthesize parent=_parent - In the implementation block
+(BOOL)validatePath:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(id)description;
-(NURenderTagGroup *)parent;
-(void)setParent:(NURenderTagGroup *)arg1 ;
-(id)path;
-(id)_root;
-(id)children;
-(id)childWithName:(id)arg1 ;
-(void)removeChildWithName:(id)arg1 ;
-(void)addChild:(id)arg1 withName:(id)arg2 ;
-(id)leafName;
-(void)_composePathComponents:(id)arg1 ;
-(id)addTag:(id)arg1 forNode:(id)arg2 ;
-(id)_nodeWithPathComponents:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)nodeWithPath:(id)arg1 ;
-(id)_descriptionWithLevel:(long long)arg1 ;
-(void)visitEveryTagWithBlock:(/*^block*/id)arg1 ;
-(id)finalizeMap:(id)arg1 ;
@end

