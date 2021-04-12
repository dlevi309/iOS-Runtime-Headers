/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _numbytes;
	unsigned long long _numfiles;
	unsigned long long _timestamp;
	int _error;
	NSString* _extension;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) NSString * extension;                      //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL hasNumfiles; 
@property (assign,nonatomic) unsigned long long numfiles;               //@synthesize numfiles=_numfiles - In the implementation block
@property (assign,nonatomic) BOOL hasNumbytes; 
@property (assign,nonatomic) unsigned long long numbytes;               //@synthesize numbytes=_numbytes - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)error;
-(void)setError:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(BOOL)hasExtension;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(id)errorAsString:(int)arg1 ;
-(int)StringAsError:(id)arg1 ;
-(void)setNumfiles:(unsigned long long)arg1 ;
-(void)setNumbytes:(unsigned long long)arg1 ;
-(void)setHasNumfiles:(BOOL)arg1 ;
-(BOOL)hasNumfiles;
-(void)setHasNumbytes:(BOOL)arg1 ;
-(BOOL)hasNumbytes;
-(unsigned long long)numfiles;
-(unsigned long long)numbytes;
@end

