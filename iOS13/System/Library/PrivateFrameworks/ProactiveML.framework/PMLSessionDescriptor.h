/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSString;

@interface PMLSessionDescriptor : NSObject <NSCopying, PMLPlistAndChunksSerializableProtocol> {

	float _featureVersion;
	NSString* _name;
	NSString* _version;
	NSString* _locale;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                  //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) float featureVersion;                //@synthesize featureVersion=_featureVersion - In the implementation block
@property (nonatomic,readonly) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForName:(id)arg1 version:(id)arg2 locale:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)locale;
-(NSString *)version;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(float)featureVersion;
-(id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3 ;
-(float)_parseFeatureVersion:(id)arg1 descriptor:(id)arg2 ;
-(id)subSessionDescriptorForLabel:(unsigned long long)arg1 ;
-(id)baseSessionDescriptor;
-(BOOL)isSubSessionDescriptor;
-(unsigned long long)subSessionLabel;
@end

