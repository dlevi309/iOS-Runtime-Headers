/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@class NSDictionary;

@interface CLSettingsDictionary : NSObject {

	id _internal;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize internal=_internal - In the implementation block
+(id)settingsWithDictionary:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(int)intForKey:(id)arg1 defaultValue:(int)arg2 ;
-(BOOL)hasValueForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)arrayForKey:(id)arg1 defaultValue:(id)arg2 ;
-(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(short)shortForKey:(id)arg1 defaultValue:(short)arg2 ;
-(id)dictionaryForKey:(id)arg1 defaultValue:(id)arg2 ;
-(float)floatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(long long)longForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

