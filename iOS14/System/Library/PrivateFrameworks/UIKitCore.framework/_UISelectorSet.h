/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSHashTable;

@interface _UISelectorSet : NSObject <NSCopying> {

	NSHashTable* _hash;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)intersectSet:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)initWithHash:(id)arg1 ;
-(id)description;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)removeSelector:(SEL)arg1 ;
-(BOOL)containsSelector:(SEL)arg1 ;
-(id)initWithSelectors:(SEL)arg1 ;
-(unsigned long long)hash;
-(void)addSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateSelectorsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsSet:(id)arg1 ;
@end

