/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBURLPatternJSONPair : PBCodable <NSCopying> {

	NSString* _domainPattern;
	NSString* _jSON;

}

@property (nonatomic,retain) NSString * domainPattern;              //@synthesize domainPattern=_domainPattern - In the implementation block
@property (nonatomic,retain) NSString * jSON;                       //@synthesize jSON=_jSON - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)jSON;
-(NSString *)domainPattern;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setDomainPattern:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setJSON:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

