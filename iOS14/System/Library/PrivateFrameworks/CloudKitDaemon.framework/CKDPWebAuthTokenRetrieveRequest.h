/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {

	NSString* _apiToken;
	BOOL _forceFetchToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasApiToken; 
@property (nonatomic,retain) NSString * apiToken;                  //@synthesize apiToken=_apiToken - In the implementation block
@property (assign,nonatomic) BOOL hasForceFetchToken; 
@property (assign,nonatomic) BOOL forceFetchToken;                 //@synthesize forceFetchToken=_forceFetchToken - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(void)setApiToken:(NSString *)arg1 ;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)apiToken;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasApiToken;
-(void)setForceFetchToken:(BOOL)arg1 ;
-(void)setHasForceFetchToken:(BOOL)arg1 ;
-(BOOL)hasForceFetchToken;
-(BOOL)forceFetchToken;
@end

