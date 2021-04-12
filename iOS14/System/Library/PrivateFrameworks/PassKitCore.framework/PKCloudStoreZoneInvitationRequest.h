/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCloudStoreZoneInvitation, PKSharingDestination;

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding> {

	PKCloudStoreZoneInvitation* _invitation;
	PKSharingDestination* _destination;

}

@property (nonatomic,retain) PKCloudStoreZoneInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,retain) PKSharingDestination * destination;                   //@synthesize destination=_destination - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cloudStoreZoneInvitationRequestWithProtobuf:(id)arg1 ;
-(void)setDestination:(PKSharingDestination *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKCloudStoreZoneInvitation *)invitation;
-(void)setInvitation:(PKCloudStoreZoneInvitation *)arg1 ;
-(PKSharingDestination *)destination;
-(BOOL)isEqual:(id)arg1 ;
@end

