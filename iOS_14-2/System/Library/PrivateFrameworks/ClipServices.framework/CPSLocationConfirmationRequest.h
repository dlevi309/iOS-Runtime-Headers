/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <ClipServices/ClipServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, CLRegion, NSString;

@interface CPSLocationConfirmationRequest : NSObject <NSSecureCoding, NSCopying> {

	long long _requestState;
	CLLocation* _deviceLocation;
	CLRegion* _expectedRegion;
	NSString* _clipBundleID;
	NSString* _applicationName;

}

@property (nonatomic,readonly) long long requestState;                   //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,readonly) CLLocation * deviceLocation;              //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) CLRegion * expectedRegion;                //@synthesize expectedRegion=_expectedRegion - In the implementation block
@property (nonatomic,readonly) NSString * clipBundleID;                  //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (nonatomic,readonly) NSString * applicationName;               //@synthesize applicationName=_applicationName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clipBundleID;
-(CLLocation *)deviceLocation;
-(long long)requestState;
-(NSString *)applicationName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestState:(long long)arg1 clipBundleID:(id)arg2 applicationName:(id)arg3 deviceLocation:(id)arg4 expectedRegion:(id)arg5 ;
-(CLRegion *)expectedRegion;
@end

