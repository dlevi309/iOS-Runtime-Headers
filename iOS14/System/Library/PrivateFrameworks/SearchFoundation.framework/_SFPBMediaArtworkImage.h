/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaArtworkImage.h>
@class NSString, NSData;


@protocol _SFPBMediaArtworkImage <NSObject>
@property (nonatomic,copy) NSString * persistentID; 
@property (nonatomic,copy) NSString * spotlightIdentifier; 
@property (assign,nonatomic) int mediaEntityType; 
@property (nonatomic,copy) NSString * universalLibraryID; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setPersistentID:(id)arg1;
-(NSData *)jsonData;
-(void)setMediaEntityType:(int)arg1;
-(void)setUniversalLibraryID:(id)arg1;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(void)setSpotlightIdentifier:(id)arg1;
-(NSString *)spotlightIdentifier;
-(id)initWithDictionary:(id)arg1;
-(NSString *)persistentID;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBMediaArtworkImage : PBCodable <_SFPBMediaArtworkImage, NSSecureCoding> {

	int _mediaEntityType;
	NSString* _persistentID;
	NSString* _spotlightIdentifier;
	NSString* _universalLibraryID;

}

@property (nonatomic,copy) NSString * persistentID;                     //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * spotlightIdentifier;              //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (assign,nonatomic) int mediaEntityType;                       //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (nonatomic,copy) NSString * universalLibraryID;               //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setPersistentID:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setMediaEntityType:(int)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)spotlightIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)persistentID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

