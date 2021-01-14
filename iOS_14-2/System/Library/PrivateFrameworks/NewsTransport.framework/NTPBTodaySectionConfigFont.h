/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionConfigFont : PBCodable <NSCopying> {

	NSString* _name;
	NSString* _urlString;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)urlString;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)hasUrlString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

