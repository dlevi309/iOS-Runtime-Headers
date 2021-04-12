/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying> {

	CKDPSubscription* _subscription;

}

@property (nonatomic,readonly) BOOL hasSubscription; 
@property (nonatomic,retain) CKDPSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)setSubscription:(CKDPSubscription *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(CKDPSubscription *)subscription;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSubscription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

