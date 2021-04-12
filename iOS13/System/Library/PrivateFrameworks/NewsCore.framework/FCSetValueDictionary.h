/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _backingDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;              //@synthesize backingDictionary=_backingDictionary - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)_setForKey:(id)arg1 ;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
@end

