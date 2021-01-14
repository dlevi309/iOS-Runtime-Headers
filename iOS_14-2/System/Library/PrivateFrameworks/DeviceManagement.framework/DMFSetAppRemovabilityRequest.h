/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFSetAppRemovabilityRequest : DMFAppRequest {

	NSNumber* _removable;

}

@property (nonatomic,copy) NSNumber * removable;              //@synthesize removable=_removable - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)removable;
-(void)setRemovable:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

