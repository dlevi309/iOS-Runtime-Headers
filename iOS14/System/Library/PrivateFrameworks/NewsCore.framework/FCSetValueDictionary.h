/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeObjectsForKey:(id)arg1 ;
-(id)_setForKey:(id)arg1 ;
-(id)init;
-(id)objectsForKey:(id)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)backingDictionary;
-(id)description;
-(id)keyEnumerator;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

