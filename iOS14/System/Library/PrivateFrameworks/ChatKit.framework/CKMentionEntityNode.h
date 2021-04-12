/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString, NSMutableSet, NSMutableDictionary;

@interface CKMentionEntityNode : NSObject {

	NSString* _key;
	NSMutableSet* _entities;
	NSMutableSet* _possibleEntities;
	NSMutableDictionary* _children;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableSet * entities;                      //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSMutableSet * possibleEntities;              //@synthesize possibleEntities=_possibleEntities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * children;               //@synthesize children=_children - In the implementation block
-(NSMutableDictionary *)children;
-(NSMutableSet *)entities;
-(void)addChild:(id)arg1 ;
-(void)setPossibleEntities:(NSMutableSet *)arg1 ;
-(void)addEntity:(id)arg1 ;
-(NSString *)key;
-(NSMutableSet *)possibleEntities;
-(void)addPossibleEntity:(id)arg1 ;
-(void)setEntities:(NSMutableSet *)arg1 ;
-(void)setChildren:(NSMutableDictionary *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

