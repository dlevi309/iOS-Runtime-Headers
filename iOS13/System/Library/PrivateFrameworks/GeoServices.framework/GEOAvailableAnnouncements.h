/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _announcements;
	NSString* _languageCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_announcements : 1;
		unsigned read_languageCode : 1;
		unsigned wrote_announcements : 1;
		unsigned wrote_languageCode : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * announcements; 
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode; 
+(BOOL)isValid:(id)arg1 ;
+(Class)announcementType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)languageCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readAnnouncements;
-(void)_addNoFlagsAnnouncement:(id)arg1 ;
-(void)_readLanguageCode;
-(unsigned long long)announcementsCount;
-(void)clearAnnouncements;
-(id)announcementAtIndex:(unsigned long long)arg1 ;
-(void)addAnnouncement:(id)arg1 ;
-(NSMutableArray *)announcements;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(BOOL)hasLanguageCode;
@end

