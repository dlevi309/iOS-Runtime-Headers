/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMBShareInvitationContext, HMBCloudZoneID, NSDate, NSURL, CKDeviceToDeviceShareInvitationToken;

@interface HMBShareInvitation : HMFObject <NSCopying, NSSecureCoding> {

	HMBShareInvitationContext* _context;
	HMBCloudZoneID* _cloudZoneID;
	NSDate* _dateCreated;
	NSURL* _shareURL;
	CKDeviceToDeviceShareInvitationToken* _token;

}

@property (nonatomic,readonly) NSURL * shareURL;                                          //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,readonly) CKDeviceToDeviceShareInvitationToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) HMBShareInvitationContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) HMBCloudZoneID * cloudZoneID;                              //@synthesize cloudZoneID=_cloudZoneID - In the implementation block
@property (nonatomic,readonly) NSDate * dateCreated;                                      //@synthesize dateCreated=_dateCreated - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSURL *)shareURL;
-(NSDate *)dateCreated;
-(void)encodeWithCoder:(id)arg1 ;
-(HMBShareInvitationContext *)context;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4 dateCreated:(id)arg5 ;
-(HMBCloudZoneID *)cloudZoneID;
-(id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4 ;
@end

