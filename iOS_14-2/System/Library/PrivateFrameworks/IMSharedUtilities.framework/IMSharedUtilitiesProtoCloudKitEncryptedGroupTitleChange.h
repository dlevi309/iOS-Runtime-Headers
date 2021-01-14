/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedGroupTitleChange : PBCodable <NSCopying> {

	NSString* _groupTitle;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupTitle; 
@property (nonatomic,retain) NSString * groupTitle;               //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                    //@synthesize padding=_padding - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(NSString *)otherHandle;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasOtherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(BOOL)hasPadding;
-(unsigned long long)hash;
-(NSData *)padding;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPadding:(NSData *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGroupTitle:(NSString *)arg1 ;
-(BOOL)hasGroupTitle;
-(NSString *)groupTitle;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

