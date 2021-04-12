/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSHashTable;

@interface _UISelectorSet : NSObject <NSCopying> {

	NSHashTable* _hash;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)addSelector:(SEL)arg1 ;
-(void)enumerateSelectorsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithHash:(id)arg1 ;
-(id)initWithSelectors:(SEL)arg1 ;
-(BOOL)containsSelector:(SEL)arg1 ;
-(void)removeSelector:(SEL)arg1 ;
-(BOOL)containsSet:(id)arg1 ;
@end

