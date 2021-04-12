/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMKeyValueCollectionStorage.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface IMKeyValueCollectionDictionaryStorage : NSObject <IMKeyValueCollectionStorage> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(NSDictionary *)dictionary;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

