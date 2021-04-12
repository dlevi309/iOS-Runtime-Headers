/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLAccountFlags : PBCodable <NSCopying> {

	long long _version;
	int _reason;
	BOOL _defaultHEVC;
	SCD_Struct_CP3 _has;

}

@property (assign,nonatomic) BOOL hasDefaultHEVC; 
@property (assign,nonatomic) BOOL defaultHEVC;                 //@synthesize defaultHEVC=_defaultHEVC - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                //@synthesize version=_version - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasReason;
-(BOOL)defaultHEVC;
-(BOOL)hasDefaultHEVC;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setDefaultHEVC:(BOOL)arg1 ;
-(void)setHasDefaultHEVC:(BOOL)arg1 ;
@end

