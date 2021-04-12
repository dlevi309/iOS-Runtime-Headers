/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _appDarkMode;
	struct {
		unsigned has_appDarkMode : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (assign,nonatomic) BOOL hasAppDarkMode; 
@property (assign,nonatomic) BOOL appDarkMode; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasAppIdentifier;
-(BOOL)hasAppMajorVersion;
-(id)dictionaryRepresentation;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(BOOL)hasAppMinorVersion;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setAppDarkMode:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasAppDarkMode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)appDarkMode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAppDarkMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

