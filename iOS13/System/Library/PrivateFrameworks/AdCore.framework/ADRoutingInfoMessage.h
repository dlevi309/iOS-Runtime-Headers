/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)searchType;
-(void)setSearchType:(NSString *)arg1 ;
-(void)setEnvironmentURL:(NSString *)arg1 ;
-(void)setProtoVersion:(NSString *)arg1 ;
-(NSString *)environmentURL;
-(NSString *)protoVersion;
@end

