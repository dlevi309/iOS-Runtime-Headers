/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/FCReorderableTagSubscription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NTPBDate;

@interface NTPBAudioPlaylistItem : PBCodable <FCKeyValueStoreCoding, FCReorderableTagSubscription, NSCopying> {

	long long _listOrder;
	NSString* _articleID;
	NTPBDate* _dateAdded;
	NSString* _identifier;
	SCD_Struct_NT3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSNumber * order; 
@property (nonatomic,copy,readonly) NSString * tagID; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasDateAdded; 
@property (nonatomic,retain) NTPBDate * dateAdded;                  //@synthesize dateAdded=_dateAdded - In the implementation block
@property (assign,nonatomic) BOOL hasListOrder; 
@property (assign,nonatomic) long long listOrder;                   //@synthesize listOrder=_listOrder - In the implementation block
+(int)keyValuePairType;
+(id)identifierFromArticleID:(id)arg1 ;
+(id)articleIDFromIdentifier:(id)arg1 ;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(NSString *)tagID;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)asCKRecord;
-(id)copyWithOrder:(id)arg1 ;
-(id)initWithCKRecord:(id)arg1 ;
-(NSNumber *)order;
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)articleID;
-(void)setDateAdded:(NTPBDate *)arg1 ;
-(BOOL)hasArticleID;
-(NSString *)description;
-(long long)listOrder;
-(void)setArticleID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDateAdded;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasListOrder;
-(void)setListOrder:(long long)arg1 ;
-(void)setHasListOrder:(BOOL)arg1 ;
-(NTPBDate *)dateAdded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

