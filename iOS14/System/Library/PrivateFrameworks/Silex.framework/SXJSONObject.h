/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSDictionary, NSString, NSMutableDictionary;

@interface SXJSONObject : NSObject {

	os_unfair_lock_s _unfairLock;
	NSDictionary* _jsonDictionary;
	NSString* _specificationVersion;
	NSMutableDictionary* _objectStorage;

}

@property (nonatomic,readonly) NSMutableDictionary * objectStorage;              //@synthesize objectStorage=_objectStorage - In the implementation block
@property (nonatomic,readonly) NSDictionary * jsonDictionary;                    //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s unfairLock;                      //@synthesize unfairLock=_unfairLock - In the implementation block
@property (nonatomic,readonly) NSString * specificationVersion;                  //@synthesize specificationVersion=_specificationVersion - In the implementation block
+(void)unlock;
+(void)initialize;
+(void)lock;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classOverrideAtInitialization:(Class)arg1 type:(id)arg2 ;
+(id)propertyHashTable;
+(id)propertyDefinitions;
+(id)protocolPropertyDefinitions;
-(os_unfair_lock_s)unfairLock;
-(id)init;
-(id)JSONRepresentation;
-(id)jsonData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)jsonDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)specificationVersion;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithJSONData:(id)arg1 andVersion:(id)arg2 ;
-(void)storeObject:(id)arg1 forLookupKey:(id)arg2 ;
-(void)storeValue:(id)arg1 forLookupKey:(id)arg2 ;
-(id)valueForLookupKey:(id)arg1 ;
-(NSMutableDictionary *)objectStorage;
@end

