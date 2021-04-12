/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDDEDExtensionScheduled : PBCodable <NSCopying> {

	unsigned long long _delay;
	unsigned long long _timestamp;
	NSString* _extension;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) NSString * extension;                      //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) unsigned long long delay;                  //@synthesize delay=_delay - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setDelay:(unsigned long long)arg1 ;
-(void)setExtension:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasDelay;
-(unsigned long long)delay;
-(void)setHasDelay:(BOOL)arg1 ;
-(NSString *)extension;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasExtension;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

