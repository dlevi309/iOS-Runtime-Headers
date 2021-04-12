/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSData * sharingInvitationData;              //@synthesize sharingInvitationData=_sharingInvitationData - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                            //@synthesize shareURL=_shareURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2 ;
-(NSData *)sharingInvitationData;
-(NSURL *)shareURL;
-(id)initWithSharingInvitationData:(id)arg1 ;
-(void)setSharingInvitationData:(NSData *)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
@end

