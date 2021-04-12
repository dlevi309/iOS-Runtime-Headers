/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)initialize;
+(void)lock;
+(void)unlock;
+(id)propertyDefinitions;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
+(Class)classOverrideAtInitialization:(Class)arg1 type:(id)arg2 ;
+(id)propertyHashTable;
+(id)protocolPropertyDefinitions;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonData;
-(NSDictionary *)jsonDictionary;
-(id)JSONRepresentation;
-(os_unfair_lock_s)unfairLock;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(NSString *)specificationVersion;
-(id)initWithJSONData:(id)arg1 andVersion:(id)arg2 ;
-(void)storeObject:(id)arg1 forLookupKey:(id)arg2 ;
-(id)objectForLookupKey:(id)arg1 ;
-(void)storeValue:(id)arg1 forLookupKey:(id)arg2 ;
-(id)valueForLookupKey:(id)arg1 ;
-(NSMutableDictionary *)objectStorage;
@end

