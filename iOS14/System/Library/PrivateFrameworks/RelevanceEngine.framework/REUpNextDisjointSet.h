/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying> {

	NSMapTable* _nodes;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(BOOL)containsItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)connectItem:(id)arg1 withItem:(id)arg2 ;
-(id)allItemsConnectedToItem:(id)arg1 ;
-(BOOL)isItem:(id)arg1 connectedToItem:(id)arg2 ;
@end

