/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBVanityURLPath : PBCodable <NSCopying> {

	NSString* _destinationParameters;
	NSString* _destinationPath;
	NSString* _sourcePath;

}

@property (nonatomic,retain) NSString * sourcePath;                         //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                    //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationParameters; 
@property (nonatomic,retain) NSString * destinationParameters;              //@synthesize destinationParameters=_destinationParameters - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)destinationPath;
-(NSString *)destinationParameters;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setSourcePath:(NSString *)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)setDestinationParameters:(NSString *)arg1 ;
-(BOOL)hasDestinationParameters;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourcePath;
-(BOOL)isEqual:(id)arg1 ;
@end

