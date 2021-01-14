/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying> {

	long long _version;
	NSData* _encryptedHMACKey;
	NSData* _encryptedMessageKey;
	NSData* _encryptionIdentity;
	NSString* _studyIdentifier;
	NSData* _studyUUID;
	int _trailingHMACLength;
	int _trailingSHALength;
	NSData* _uploadUUID;
	BOOL _compressed;
	SCD_Struct_HK15 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedMessageKey; 
@property (nonatomic,retain) NSData * encryptedMessageKey;               //@synthesize encryptedMessageKey=_encryptedMessageKey - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptionIdentity; 
@property (nonatomic,retain) NSData * encryptionIdentity;                //@synthesize encryptionIdentity=_encryptionIdentity - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadUUID; 
@property (nonatomic,retain) NSData * uploadUUID;                        //@synthesize uploadUUID=_uploadUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasStudyIdentifier; 
@property (nonatomic,retain) NSString * studyIdentifier;                 //@synthesize studyIdentifier=_studyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedHMACKey; 
@property (nonatomic,retain) NSData * encryptedHMACKey;                  //@synthesize encryptedHMACKey=_encryptedHMACKey - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingHMACLength; 
@property (assign,nonatomic) int trailingHMACLength;                     //@synthesize trailingHMACLength=_trailingHMACLength - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingSHALength; 
@property (assign,nonatomic) int trailingSHALength;                      //@synthesize trailingSHALength=_trailingSHALength - In the implementation block
@property (assign,nonatomic) BOOL hasCompressed; 
@property (assign,nonatomic) BOOL compressed;                            //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) BOOL hasStudyUUID; 
@property (nonatomic,retain) NSData * studyUUID;                         //@synthesize studyUUID=_studyUUID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(BOOL)compressed;
-(NSData *)studyUUID;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)uploadUUID;
-(void)setEncryptedMessageKey:(NSData *)arg1 ;
-(void)setEncryptionIdentity:(NSData *)arg1 ;
-(void)setUploadUUID:(NSData *)arg1 ;
-(void)setStudyUUID:(NSData *)arg1 ;
-(void)setStudyIdentifier:(NSString *)arg1 ;
-(void)setEncryptedHMACKey:(NSData *)arg1 ;
-(BOOL)hasEncryptedMessageKey;
-(BOOL)hasEncryptionIdentity;
-(BOOL)hasUploadUUID;
-(BOOL)hasStudyIdentifier;
-(BOOL)hasEncryptedHMACKey;
-(void)setTrailingHMACLength:(int)arg1 ;
-(void)setHasTrailingHMACLength:(BOOL)arg1 ;
-(BOOL)hasTrailingHMACLength;
-(void)setTrailingSHALength:(int)arg1 ;
-(void)setHasTrailingSHALength:(BOOL)arg1 ;
-(BOOL)hasTrailingSHALength;
-(void)setHasCompressed:(BOOL)arg1 ;
-(BOOL)hasCompressed;
-(BOOL)hasStudyUUID;
-(NSData *)encryptedMessageKey;
-(NSData *)encryptionIdentity;
-(NSString *)studyIdentifier;
-(NSData *)encryptedHMACKey;
-(int)trailingHMACLength;
-(int)trailingSHALength;
-(id)description;
-(void)setCompressed:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

