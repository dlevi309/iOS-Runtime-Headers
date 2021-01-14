/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableTinkerOptInRequest : PBRequest <NSCopying> {

	NSString* _guardianDisplayName;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianDisplayName; 
@property (nonatomic,retain) NSString * guardianDisplayName;              //@synthesize guardianDisplayName=_guardianDisplayName - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(NSString *)guardianDisplayName;
-(void)setGuardianDisplayName:(NSString *)arg1 ;
-(BOOL)hasGuardianDisplayName;
@end

