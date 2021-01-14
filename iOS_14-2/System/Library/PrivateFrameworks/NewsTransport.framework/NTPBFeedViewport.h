/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBFeedViewport : PBCodable <NSCopying> {

	unsigned long long _feedDBVersion;
	unsigned long long _version;
	NSMutableArray* _elements;
	NSString* _identifier;
	NSMutableArray* _sharedStrings;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasFeedDBVersion; 
@property (assign,nonatomic) unsigned long long feedDBVersion;              //@synthesize feedDBVersion=_feedDBVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                     //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedStrings;                //@synthesize sharedStrings=_sharedStrings - In the implementation block
+(Class)elementsType;
+(Class)sharedStringsType;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setElements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)elements;
-(id)elementsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIdentifier;
-(id)sharedStringsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSharedStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sharedStrings;
-(unsigned long long)elementsCount;
-(id)description;
-(void)clearSharedStrings;
-(BOOL)hasFeedDBVersion;
-(void)setFeedDBVersion:(unsigned long long)arg1 ;
-(void)clearElements;
-(unsigned long long)hash;
-(void)addElements:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)sharedStringsCount;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)feedDBVersion;
-(void)addSharedStrings:(id)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasFeedDBVersion:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

