/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@class TSPComponentObjectUUIDMap, NSDictionary;

@interface TSPDeepCopyMetadata : TSPObject {

	long long _rootObjectIdentifier;
	unsigned long long _version;
	unsigned long long _readVersion;
	TSPComponentObjectUUIDMap* _componentObjectUUIDMap;
	NSDictionary* _cachedDataMap;

}

@property (nonatomic,readonly) long long rootObjectIdentifier;                                  //@synthesize rootObjectIdentifier=_rootObjectIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long readVersion;                                  //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) TSPComponentObjectUUIDMap * componentObjectUUIDMap;              //@synthesize componentObjectUUIDMap=_componentObjectUUIDMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedDataMap;                                    //@synthesize cachedDataMap=_cachedDataMap - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)version;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long long)readVersion;
-(long long)rootObjectIdentifier;
-(TSPComponentObjectUUIDMap *)componentObjectUUIDMap;
-(id)initWithRootObject:(id)arg1 version:(unsigned long long)arg2 readVersion:(unsigned long long)arg3 componentObjectUUIDMap:(id)arg4 cachedDataMap:(id)arg5 ;
-(NSDictionary *)cachedDataMap;
@end

