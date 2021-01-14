/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKeyValueStore.h>

@protocol _DKKeyValueStore <_DKSimpleKeyValueStore>
@required
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(id)numberForKey:(id)arg1;
-(id)dateForKey:(id)arg1;
-(id)dataForKey:(id)arg1;
-(void)setString:(id)arg1 forKey:(id)arg2;
-(void)setData:(id)arg1 forKey:(id)arg2;
-(id)dictionaryForKey:(id)arg1;
-(id)objectForKey:(id)arg1 havingClass:(Class)arg2;
-(void)setArray:(id)arg1 forKey:(id)arg2;
-(void)removeObjectForKey:(id)arg1;
-(void)setNumber:(id)arg1 forKey:(id)arg2;
-(void)setDate:(id)arg1 forKey:(id)arg2;
-(BOOL)boolForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2;
-(id)stringForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


@protocol _DKSimpleKeyValueStore;
@interface _DKKeyValueStore : NSObject <_DKKeyValueStore> {

	id<_DKSimpleKeyValueStore> _store;

}
+(id)standardUserDefaultsKeyValueStore;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 havingClass:(Class)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(id)initWithSimpleKeyValueStore:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

