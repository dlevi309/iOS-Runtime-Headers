/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPSubscriptionDeleteRequest : PBRequest <NSCopying> {

	CKDPIdentifier* _identifier;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(BOOL)hasIdentifier;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(CKDPIdentifier *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

