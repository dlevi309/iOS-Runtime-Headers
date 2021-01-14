/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYErrorInfo, SYMessageHeader, NSString;

@interface SYSyncEndResponse : PBCodable <NSCopying> {

	SYErrorInfo* _error;
	int _errorResolution;
	SYMessageHeader* _header;
	NSString* _syncID;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYErrorInfo * error;                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasErrorResolution; 
@property (assign,nonatomic) int errorResolution;                   //@synthesize errorResolution=_errorResolution - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)syncID;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(SYErrorInfo *)arg1 ;
-(SYErrorInfo *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setErrorResolution:(int)arg1 ;
-(int)errorResolution;
-(void)setHasErrorResolution:(BOOL)arg1 ;
-(BOOL)hasErrorResolution;
-(id)errorResolutionAsString:(int)arg1 ;
-(int)StringAsErrorResolution:(id)arg1 ;
@end

