/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <ProactiveContextClient/ProactiveContextClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXModePBRecord;

@interface ATXModePBLogWrapper : PBCodable <NSCopying> {

	ATXModePBRecord* _modeRecord;
	int _version;
	SCD_Struct_AT2 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasModeRecord; 
@property (nonatomic,retain) ATXModePBRecord * modeRecord;              //@synthesize modeRecord=_modeRecord - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModeRecord:(ATXModePBRecord *)arg1 ;
-(BOOL)hasModeRecord;
-(ATXModePBRecord *)modeRecord;
@end

