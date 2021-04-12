/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)apiToken;
-(void)setApiToken:(NSString *)arg1 ;
-(BOOL)hasApiToken;
-(void)setForceFetchToken:(BOOL)arg1 ;
-(void)setHasForceFetchToken:(BOOL)arg1 ;
-(BOOL)hasForceFetchToken;
-(BOOL)forceFetchToken;
@end

