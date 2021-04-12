/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary;

@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _identifierToObjectUUIDDictionary;
	NSDictionary* _objectUUIDToIdentifierDictionary;

}

@property (nonatomic,readonly) NSDictionary * identifierToObjectUUIDDictionary;              //@synthesize identifierToObjectUUIDDictionary=_identifierToObjectUUIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectUUIDToIdentifierDictionary;              //@synthesize objectUUIDToIdentifierDictionary=_objectUUIDToIdentifierDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithMessage:(const RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToMessage:(RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
-(void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)identifierForObjectUUID:(id)arg1 ;
-(id)initWithIdentifierToObjectUUIDDictionary:(id)arg1 objectUUIDToIdentifierDictionary:(id)arg2 ;
-(id)objectUUIDForIdentifier:(long long)arg1 ;
-(NSDictionary *)identifierToObjectUUIDDictionary;
-(NSDictionary *)objectUUIDToIdentifierDictionary;
@end

