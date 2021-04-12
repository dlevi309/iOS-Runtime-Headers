/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString, NSMutableArray;

@interface CKParticipantsTrie : NSObject {

	NSString* _key;
	NSMutableArray* _entities;
	NSMutableArray* _children;

}

@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;              //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
-(BOOL)hasPrefix:(id)arg1 ;
-(NSMutableArray *)children;
-(NSMutableArray *)entities;
-(id)init;
-(id)initWithKey:(id)arg1 ;
-(id)entitiesForPrefix:(id)arg1 ;
-(id)_composedCharactersForString:(id)arg1 appendRootKey:(BOOL)arg2 ;
-(void)_addEntity:(id)arg1 named:(id)arg2 forCharacters:(id)arg3 ;
-(id)_lastNodeForString:(id)arg1 ;
-(void)loadHandleEntityFromLastNode:(id)arg1 intoResult:(id)arg2 ;
-(void)addParticipantName:(id)arg1 entity:(id)arg2 ;
-(id)rawHandlesForParticipantName:(id)arg1 ;
-(BOOL)_trieContainsEntity:(id)arg1 ;
-(NSString *)key;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

