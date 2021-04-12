/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLAccountFlags : PBCodable <NSCopying> {

	long long _version;
	int _reason;
	BOOL _defaultHEVC;
	SCD_Struct_CP5 _has;

}

@property (assign,nonatomic) BOOL hasDefaultHEVC; 
@property (assign,nonatomic) BOOL defaultHEVC;                 //@synthesize defaultHEVC=_defaultHEVC - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                //@synthesize version=_version - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(BOOL)hasReason;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(id)description;
-(int)reason;
-(BOOL)defaultHEVC;
-(BOOL)hasDefaultHEVC;
-(unsigned long long)hash;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDefaultHEVC:(BOOL)arg1 ;
-(void)setHasDefaultHEVC:(BOOL)arg1 ;
@end

