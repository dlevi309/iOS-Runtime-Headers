/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying> {

	NSMapTable* _nodes;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(void)connectItem:(id)arg1 withItem:(id)arg2 ;
-(id)allItemsConnectedToItem:(id)arg1 ;
-(BOOL)isItem:(id)arg1 connectedToItem:(id)arg2 ;
@end

