/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest {

	NSNumber* _associatedDomainsEnableDirectDownloads;

}

@property (nonatomic,copy) NSNumber * associatedDomainsEnableDirectDownloads;              //@synthesize associatedDomainsEnableDirectDownloads=_associatedDomainsEnableDirectDownloads - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)associatedDomainsEnableDirectDownloads;
-(void)setAssociatedDomainsEnableDirectDownloads:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

