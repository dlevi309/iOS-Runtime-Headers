/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADRoutingInfoMessage : PBCodable <NSCopying> {

	NSString* _environmentURL;
	NSString* _protoVersion;
	NSString* _searchType;

}

@property (nonatomic,retain) NSString * searchType;                  //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) NSString * environmentURL;              //@synthesize environmentURL=_environmentURL - In the implementation block
@property (nonatomic,retain) NSString * protoVersion;                //@synthesize protoVersion=_protoVersion - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)searchType;
-(NSString *)environmentURL;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setEnvironmentURL:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProtoVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)protoVersion;
@end

