/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoRemoteAdminAvailabilityChangeRequest : PBRequest <NSCopying> {

	BOOL _isAvailable;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasIsAvailable; 
@property (assign,nonatomic) BOOL isAvailable;                 //@synthesize isAvailable=_isAvailable - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)isAvailable;
-(BOOL)hasIsAvailable;
-(void)setHasIsAvailable:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

