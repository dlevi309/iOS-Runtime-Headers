/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeObjectsForKey:(id)arg1 ;
-(id)_setForKey:(id)arg1 ;
-(id)init;
-(id)objectEnumerator;
-(id)objectsForKey:(id)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setBackingMapTable:(NSMapTable *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(id)keyEnumerator;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMapTable *)backingMapTable;
@end

