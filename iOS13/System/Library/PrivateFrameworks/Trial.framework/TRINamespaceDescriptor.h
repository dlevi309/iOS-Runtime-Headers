/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@class NSString;

@interface TRINamespaceDescriptor : NSObject {

	unsigned _namespaceId;
	unsigned _namespaceVersion;
	unsigned _namespaceCompatibilityVersion;
	NSString* _factorsPath;

}

@property (nonatomic,readonly) unsigned namespaceId;                                //@synthesize namespaceId=_namespaceId - In the implementation block
@property (nonatomic,readonly) NSString * factorsPath;                              //@synthesize factorsPath=_factorsPath - In the implementation block
@property (nonatomic,readonly) unsigned namespaceVersion;                           //@synthesize namespaceVersion=_namespaceVersion - In the implementation block
@property (nonatomic,readonly) unsigned namespaceCompatibilityVersion;              //@synthesize namespaceCompatibilityVersion=_namespaceCompatibilityVersion - In the implementation block
+(id)loadFromFile:(id)arg1 ;
+(id)loadWithNamespaceId:(unsigned)arg1 fromDirectory:(id)arg2 ;
+(id)descriptorPathForNamespaceId:(unsigned)arg1 fromDirectory:(id)arg2 ;
+(BOOL)removeDescriptorWithNamespaceId:(unsigned)arg1 fromDirectory:(id)arg2 ;
+(id)descriptorsForDirectory:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(unsigned)namespaceId;
-(NSString *)factorsPath;
-(unsigned)namespaceVersion;
-(unsigned)namespaceCompatibilityVersion;
-(id)initWithNamespaceId:(unsigned)arg1 factorsPath:(id)arg2 namespaceVersion:(unsigned)arg3 namespaceCompatibilityVersion:(unsigned)arg4 ;
-(BOOL)saveToDirectory:(id)arg1 ;
-(BOOL)removeFromDirectory:(id)arg1 ;
@end

