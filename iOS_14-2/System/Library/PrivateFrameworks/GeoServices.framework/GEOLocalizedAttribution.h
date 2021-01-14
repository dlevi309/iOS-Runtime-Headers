/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_displayName : 1;
		unsigned read_language : 1;
		unsigned read_logoURLs : 1;
		unsigned read_snippetLogoURLs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSMutableArray * logoURLs; 
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs; 
+(Class)logoURLsType;
+(Class)snippetLogoURLsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)snippetLogoURLs;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLanguage;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)snippetLogoURLsCount;
-(void)setLanguage:(NSString *)arg1 ;
-(void)clearSnippetLogoURLs;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)logoURLs;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)logoURLsCount;
-(id)logoURLsAtIndex:(unsigned long long)arg1 ;
-(void)clearLogoURLs;
-(unsigned long long)hash;
-(id)snippetLogoURLsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(id)bestURLForLogos:(id)arg1 scale:(double)arg2 ;
-(void)addLogoURLs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)language;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(BOOL)hasDisplayName;
@end

