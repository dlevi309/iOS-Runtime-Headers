/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector : PBCodable <NSCopying> {

	NSData* _personalizationVector;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasPersonalizationVector; 
@property (nonatomic,retain) NSData * personalizationVector;               //@synthesize personalizationVector=_personalizationVector - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                           //@synthesize version=_version - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasPersonalizationVector;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPersonalizationVector:(NSData *)arg1 ;
-(NSData *)personalizationVector;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

