/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest {

	NSArray* _associatedDomains;

}

@property (nonatomic,copy) NSArray * associatedDomains;              //@synthesize associatedDomains=_associatedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)associatedDomains;
-(id)initWithCoder:(id)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
@end

