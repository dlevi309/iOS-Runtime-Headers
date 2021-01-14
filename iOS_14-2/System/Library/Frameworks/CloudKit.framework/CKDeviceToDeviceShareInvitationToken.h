/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _sharingInvitationData;
	NSURL* _shareURL;

}

@property (nonatomic,copy,readonly) NSData * sharingInvitationData;              //@synthesize sharingInvitationData=_sharingInvitationData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * shareURL;                            //@synthesize shareURL=_shareURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)shareURL;
-(id)init;
-(NSData *)sharingInvitationData;
-(id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

