/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface RMModelPayloadBase : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _unknownPayloadKeys;

}

@property (nonatomic,copy) NSSet * unknownPayloadKeys;              //@synthesize unknownPayloadKeys=_unknownPayloadKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
+(id)loadData:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)unknownPayloadKeys;
-(void)setUnknownPayloadKeys:(NSSet *)arg1 ;
-(BOOL)loadStringFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(BOOL)loadIntegerFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(void)serializeStringIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeIntegerIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(BOOL)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 validator:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id*)arg7 ;
-(BOOL)loadDictionaryFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 serializationType:(short)arg7 error:(id*)arg8 ;
-(BOOL)loadBooleanFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(void)serializeArrayIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 itemSerializer:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)serializeWithType:(short)arg1 ;
-(void)serializeDictionaryIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 dictSerializer:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(void)serializeBooleanIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(BOOL)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 nested:(BOOL)arg5 isRequired:(BOOL)arg6 defaultValue:(id)arg7 serializationType:(short)arg8 error:(id*)arg9 ;
-(BOOL)loadDataFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id*)arg7 ;
-(void)serializeDataIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 ;
-(void)mergeUnknownKeysFrom:(id)arg1 parentKey:(id)arg2 ;
-(BOOL)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 usingKey:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 payloadValue:(id*)arg6 error:(id*)arg7 ;
-(id)createNestedObjectWithClass:(Class)arg1 serializationType:(short)arg2 parentKey:(id)arg3 payload:(id)arg4 error:(id*)arg5 ;
-(BOOL)getModelObjectFromDictionary:(id)arg1 usingKey:(id)arg2 classType:(Class)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 payloadValue:(id*)arg7 error:(id*)arg8 ;
-(void)_serializeItemIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 isDefaultValue:(BOOL)arg5 ;
-(id)serializeAsDataWithType:(short)arg1 error:(id*)arg2 ;
-(BOOL)loadFloatFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(BOOL)loadDateFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id*)arg7 ;
-(void)serializeFloatIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeDateIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 ;
@end

