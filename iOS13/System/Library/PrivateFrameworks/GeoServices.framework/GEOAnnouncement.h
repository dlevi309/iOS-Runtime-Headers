/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOPDFlyover, GEOMapRegion;

@interface GEOAnnouncement : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _buttonOneAppURI;
	NSString* _buttonOneMessage;
	NSString* _buttonTwoAppURI;
	NSString* _buttonTwoMessage;
	GEOPDFlyover* _flyoverInfo;
	GEOMapRegion* _mapRegion;
	NSString* _title;
	NSString* _userMessage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _announcementID;
	int _announcementType;
	unsigned _displayDestinations;
	int _releasePhase;
	struct {
		unsigned has_announcementID : 1;
		unsigned has_announcementType : 1;
		unsigned has_displayDestinations : 1;
		unsigned has_releasePhase : 1;
		unsigned read_buttonOneAppURI : 1;
		unsigned read_buttonOneMessage : 1;
		unsigned read_buttonTwoAppURI : 1;
		unsigned read_buttonTwoMessage : 1;
		unsigned read_flyoverInfo : 1;
		unsigned read_mapRegion : 1;
		unsigned read_title : 1;
		unsigned read_userMessage : 1;
		unsigned wrote_buttonOneAppURI : 1;
		unsigned wrote_buttonOneMessage : 1;
		unsigned wrote_buttonTwoAppURI : 1;
		unsigned wrote_buttonTwoMessage : 1;
		unsigned wrote_flyoverInfo : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_title : 1;
		unsigned wrote_userMessage : 1;
		unsigned wrote_announcementID : 1;
		unsigned wrote_announcementType : 1;
		unsigned wrote_displayDestinations : 1;
		unsigned wrote_releasePhase : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAnnouncementID; 
@property (assign,nonatomic) unsigned announcementID; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasUserMessage; 
@property (nonatomic,retain) NSString * userMessage; 
@property (nonatomic,readonly) BOOL hasButtonOneMessage; 
@property (nonatomic,retain) NSString * buttonOneMessage; 
@property (nonatomic,readonly) BOOL hasButtonOneAppURI; 
@property (nonatomic,retain) NSString * buttonOneAppURI; 
@property (nonatomic,readonly) BOOL hasButtonTwoMessage; 
@property (nonatomic,retain) NSString * buttonTwoMessage; 
@property (nonatomic,readonly) BOOL hasButtonTwoAppURI; 
@property (nonatomic,retain) NSString * buttonTwoAppURI; 
@property (assign,nonatomic) BOOL hasDisplayDestinations; 
@property (assign,nonatomic) unsigned displayDestinations; 
@property (assign,nonatomic) BOOL hasReleasePhase; 
@property (assign,nonatomic) int releasePhase; 
@property (nonatomic,readonly) BOOL hasFlyoverInfo; 
@property (nonatomic,retain) GEOPDFlyover * flyoverInfo; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) BOOL hasAnnouncementType; 
@property (assign,nonatomic) int announcementType; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasTitle;
-(void)readAll:(BOOL)arg1 ;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(int)announcementType;
-(void)_readTitle;
-(void)_readUserMessage;
-(void)_readButtonOneMessage;
-(void)_readButtonOneAppURI;
-(void)_readButtonTwoMessage;
-(void)_readButtonTwoAppURI;
-(void)_readFlyoverInfo;
-(NSString *)userMessage;
-(NSString *)buttonOneMessage;
-(NSString *)buttonOneAppURI;
-(NSString *)buttonTwoMessage;
-(NSString *)buttonTwoAppURI;
-(GEOPDFlyover *)flyoverInfo;
-(void)setUserMessage:(NSString *)arg1 ;
-(void)setButtonOneMessage:(NSString *)arg1 ;
-(void)setButtonOneAppURI:(NSString *)arg1 ;
-(void)setButtonTwoMessage:(NSString *)arg1 ;
-(void)setButtonTwoAppURI:(NSString *)arg1 ;
-(void)setFlyoverInfo:(GEOPDFlyover *)arg1 ;
-(unsigned)announcementID;
-(void)setAnnouncementID:(unsigned)arg1 ;
-(void)setHasAnnouncementID:(BOOL)arg1 ;
-(BOOL)hasAnnouncementID;
-(BOOL)hasUserMessage;
-(BOOL)hasButtonOneMessage;
-(BOOL)hasButtonOneAppURI;
-(BOOL)hasButtonTwoMessage;
-(BOOL)hasButtonTwoAppURI;
-(unsigned)displayDestinations;
-(void)setDisplayDestinations:(unsigned)arg1 ;
-(void)setHasDisplayDestinations:(BOOL)arg1 ;
-(BOOL)hasDisplayDestinations;
-(int)releasePhase;
-(void)setReleasePhase:(int)arg1 ;
-(void)setHasReleasePhase:(BOOL)arg1 ;
-(BOOL)hasReleasePhase;
-(id)releasePhaseAsString:(int)arg1 ;
-(int)StringAsReleasePhase:(id)arg1 ;
-(BOOL)hasFlyoverInfo;
-(void)setAnnouncementType:(int)arg1 ;
-(void)setHasAnnouncementType:(BOOL)arg1 ;
-(BOOL)hasAnnouncementType;
-(id)announcementTypeAsString:(int)arg1 ;
-(int)StringAsAnnouncementType:(id)arg1 ;
@end

