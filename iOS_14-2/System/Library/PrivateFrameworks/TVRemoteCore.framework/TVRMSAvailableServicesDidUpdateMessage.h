/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TVRMSAvailableServicesDidUpdateMessage : PBCodable <NSCopying> {

	NSMutableArray* _services;
	int _sessionIdentifier;
	SCD_Struct_TV4 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * services;              //@synthesize services=_services - In the implementation block
-(NSMutableArray *)services;
-(id)dictionaryRepresentation;
-(void)setServices:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addServices:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(unsigned long long)servicesCount;
-(id)servicesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearServices;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
@end

