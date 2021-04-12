/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCloudStoreZoneInvitation, PKSharingDestination;

@interface PKCloudStoreZoneInvitationResponse : NSObject <NSSecureCoding> {

	PKCloudStoreZoneInvitation* _invitation;
	PKSharingDestination* _destination;
	long long _status;

}

@property (nonatomic,retain) PKCloudStoreZoneInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,retain) PKSharingDestination * destination;                   //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cloudStoreZoneInvitationResponseWithProtobuf:(id)arg1 ;
-(void)setDestination:(PKSharingDestination *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(PKCloudStoreZoneInvitation *)invitation;
-(void)setInvitation:(PKCloudStoreZoneInvitation *)arg1 ;
-(PKSharingDestination *)destination;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

