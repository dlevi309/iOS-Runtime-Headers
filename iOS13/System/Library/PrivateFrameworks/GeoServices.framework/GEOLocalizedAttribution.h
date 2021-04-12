/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_displayName : 1;
		unsigned wrote_language : 1;
		unsigned wrote_logoURLs : 1;
		unsigned wrote_snippetLogoURLs : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSMutableArray * logoURLs; 
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logoURLsType;
+(Class)snippetLogoURLsType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLanguage;
-(BOOL)hasLanguage;
-(void)_readDisplayName;
-(BOOL)hasDisplayName;
-(void)_readLogoURLs;
-(void)_addNoFlagsLogoURLs:(id)arg1 ;
-(void)_readSnippetLogoURLs;
-(void)_addNoFlagsSnippetLogoURLs:(id)arg1 ;
-(NSMutableArray *)logoURLs;
-(NSMutableArray *)snippetLogoURLs;
-(unsigned long long)logoURLsCount;
-(void)clearLogoURLs;
-(id)logoURLsAtIndex:(unsigned long long)arg1 ;
-(void)addLogoURLs:(id)arg1 ;
-(unsigned long long)snippetLogoURLsCount;
-(void)clearSnippetLogoURLs;
-(id)snippetLogoURLsAtIndex:(unsigned long long)arg1 ;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(id)bestURLForLogos:(id)arg1 scale:(double)arg2 ;
@end

