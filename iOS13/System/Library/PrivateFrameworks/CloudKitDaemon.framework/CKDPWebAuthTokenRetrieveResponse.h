/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)hasToken;
-(void)setContainerScopedUserId:(NSString *)arg1 ;
-(BOOL)hasContainerScopedUserId;
-(NSString *)containerScopedUserId;
@end

