/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, NSString, NSNumber;

@interface HDConceptIndexEntry : NSObject {

	NSUUID* _sampleUUID;
	long long _conceptIdentifier;
	long long _conceptVersion;
	NSString* _keyPath;
	unsigned long long _compoundIndex;
	unsigned long long _type;
	NSNumber* _ontologyVersion;

}

@property (nonatomic,copy,readonly) NSUUID * sampleUUID;                      //@synthesize sampleUUID=_sampleUUID - In the implementation block
@property (nonatomic,readonly) long long conceptIdentifier;                   //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
@property (nonatomic,readonly) long long conceptVersion;                      //@synthesize conceptVersion=_conceptVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundIndex;              //@synthesize compoundIndex=_compoundIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ontologyVersion;               //@synthesize ontologyVersion=_ontologyVersion - In the implementation block
-(id)init;
-(long long)conceptIdentifier;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)compoundIndex;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)sampleUUID;
-(long long)conceptVersion;
-(NSNumber *)ontologyVersion;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(long long)arg2 conceptVersion:(long long)arg3 keyPath:(id)arg4 compoundIndex:(unsigned long long)arg5 type:(unsigned long long)arg6 ontologyVersion:(id)arg7 ;
@end

