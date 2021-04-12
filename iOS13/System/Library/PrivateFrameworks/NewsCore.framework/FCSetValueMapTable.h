/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying> {

	NSMapTable* _backingMapTable;

}

@property (nonatomic,retain) NSMapTable * backingMapTable;              //@synthesize backingMapTable=_backingMapTable - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)keyEnumerator;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(NSMapTable *)backingMapTable;
-(id)_setForKey:(id)arg1 ;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
-(void)setBackingMapTable:(NSMapTable *)arg1 ;
@end

