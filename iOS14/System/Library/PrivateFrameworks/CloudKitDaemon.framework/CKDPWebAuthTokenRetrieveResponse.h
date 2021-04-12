/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying> {

	NSString* _containerScopedUserId;
	NSString* _token;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerScopedUserId; 
@property (nonatomic,retain) NSString * containerScopedUserId;              //@synthesize containerScopedUserId=_containerScopedUserId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContainerScopedUserId:(NSString *)arg1 ;
-(BOOL)hasContainerScopedUserId;
-(NSString *)containerScopedUserId;
@end

