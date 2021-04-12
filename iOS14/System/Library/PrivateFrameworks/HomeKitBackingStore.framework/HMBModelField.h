/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, HMFVersion;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _encrypted;
	BOOL _excludeFromCloudStorage;
	BOOL _optional;
	BOOL _conformsToHMBModelNativeCKWrapper;
	Class _classObj;
	NSString* _externalRecordField;
	unsigned long long _loggingVisibility;
	id _defaultValue;
	HMFVersion* _readonlyVersion;
	HMFVersion* _unavailableVersion;
	/*^block*/id _encodeBlock;
	/*^block*/id _decodeBlock;
	/*^block*/id _descriptionBlock;

}

@property (assign,getter=isOptional,nonatomic) BOOL optional;                     //@synthesize optional=_optional - In the implementation block
@property (assign,nonatomic) unsigned long long loggingVisibility;                //@synthesize loggingVisibility=_loggingVisibility - In the implementation block
@property (nonatomic,retain) id defaultValue;                                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) HMFVersion * readonlyVersion;                          //@synthesize readonlyVersion=_readonlyVersion - In the implementation block
@property (nonatomic,copy) HMFVersion * unavailableVersion;                       //@synthesize unavailableVersion=_unavailableVersion - In the implementation block
@property (nonatomic,retain) NSString * externalRecordField;                      //@synthesize externalRecordField=_externalRecordField - In the implementation block
@property (assign,nonatomic) BOOL encrypted;                                      //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,nonatomic) BOOL excludeFromCloudStorage;                        //@synthesize excludeFromCloudStorage=_excludeFromCloudStorage - In the implementation block
@property (assign,nonatomic) BOOL conformsToHMBModelNativeCKWrapper;              //@synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper - In the implementation block
@property (nonatomic,copy) id encodeBlock;                                        //@synthesize encodeBlock=_encodeBlock - In the implementation block
@property (nonatomic,copy) id decodeBlock;                                        //@synthesize decodeBlock=_decodeBlock - In the implementation block
@property (nonatomic,copy) id descriptionBlock;                                   //@synthesize descriptionBlock=_descriptionBlock - In the implementation block
@property (nonatomic,readonly) Class classObj;                                    //@synthesize classObj=_classObj - In the implementation block
+(id)fieldWithClass:(Class)arg1 ;
+(id)fieldWithClass:(Class)arg1 options:(id)arg2 ;
+(id)optionalFieldWithClass:(Class)arg1 ;
+(id)optionalFieldWithClass:(Class)arg1 options:(id)arg2 ;
+(id)deprecatedField;
-(void)setOptional:(BOOL)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(id)decodeQueryableValue:(id)arg1 ;
-(BOOL)isOptional;
-(BOOL)encrypted;
-(BOOL)conformsToHMBModelNativeCKWrapper;
-(id)defaultValue;
-(BOOL)excludeFromCloudStorage;
-(id)descriptionForEncodedQueryableValue:(id)arg1 ;
-(id)encodeBlock;
-(void)setReadonlyVersion:(HMFVersion *)arg1 ;
-(HMFVersion *)unavailableVersion;
-(id)initWithClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setDescriptionBlock:(id)arg1 ;
-(id)decodeBlock;
-(HMFVersion *)readonlyVersion;
-(void)setEncodeBlock:(id)arg1 ;
-(void)setConformsToHMBModelNativeCKWrapper:(BOOL)arg1 ;
-(id)description;
-(id)descriptionBlock;
-(void)setExcludeFromCloudStorage:(BOOL)arg1 ;
-(void)setDecodeBlock:(id)arg1 ;
-(void)setEncrypted:(BOOL)arg1 ;
-(Class)classObj;
-(void)setUnavailableVersion:(HMFVersion *)arg1 ;
-(void)setExternalRecordField:(NSString *)arg1 ;
-(void)setLoggingVisibility:(unsigned long long)arg1 ;
-(unsigned long long)loggingVisibility;
-(NSString *)externalRecordField;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)encodeQueryableValue:(id)arg1 ;
-(id)initWithClass:(Class)arg1 options:(id)arg2 ;
@end

