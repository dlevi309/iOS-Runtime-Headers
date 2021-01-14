/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

@class NSOrderedSet;


@protocol DOCTagRegistryDelegate <NSObject>
@property (assign,nonatomic) BOOL inBatchUpdate; 
@property (assign,nonatomic) long long tagSerialNumber; 
@property (nonatomic,readonly) NSOrderedSet * userTags; 
@property (nonatomic,readonly) NSOrderedSet * discoveredTags; 
@required
-(BOOL)addTag:(id)arg1;
-(NSOrderedSet *)userTags;
-(NSOrderedSet *)discoveredTags;
-(long long)tagSerialNumber;
-(BOOL)inBatchUpdate;
-(void)setInBatchUpdate:(BOOL)arg1;
-(void)addTag:(id)arg1 options:(long long)arg2;
-(BOOL)isValidNewTagName:(id)arg1;
-(BOOL)canReplaceTag:(id)arg1 withTag:(id)arg2;
-(void)setTagSerialNumber:(long long)arg1;
-(void)addTags:(id)arg1 options:(long long)arg2;
-(BOOL)insertTag:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)removeTags:(id)arg1;
-(void)removeAllTagsOfType:(long long)arg1;
-(BOOL)replaceTag:(id)arg1 withTag:(id)arg2;
-(BOOL)moveTag:(id)arg1 toIndex:(unsigned long long)arg2;
-(id)tagForName:(id)arg1;

@end

