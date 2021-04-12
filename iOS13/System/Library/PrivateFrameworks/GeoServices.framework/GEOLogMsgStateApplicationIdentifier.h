/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_appIdentifier : 1;
		unsigned wrote_appMajorVersion : 1;
		unsigned wrote_appMinorVersion : 1;
		unsigned wrote_appDarkMode : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)_readAppMajorVersion;
-(void)_readAppMinorVersion;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(void)_readAppIdentifier;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(BOOL)appDarkMode;
-(void)setAppDarkMode:(BOOL)arg1 ;
-(void)setHasAppDarkMode:(BOOL)arg1 ;
-(BOOL)hasAppDarkMode;
@end

