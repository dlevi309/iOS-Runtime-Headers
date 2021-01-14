/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBTodayModuleContentRequest;

@interface NTPBTodayModuleContentDescriptor : PBCodable <NSCopying> {

	NSString* _identifier;
	NTPBTodayModuleContentRequest* _request;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) NTPBTodayModuleContentRequest * request;              //@synthesize request=_request - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasRequest;
-(BOOL)hasIdentifier;
-(void)setRequest:(NTPBTodayModuleContentRequest *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NTPBTodayModuleContentRequest *)request;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

