/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSNumber, NSURL;

@interface DMFAppRequest : DMFTaskRequest {

	NSString* _bundleIdentifier;
	NSNumber* _storeItemIdentifier;
	NSURL* _manifestURL;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;              //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                         //@synthesize manifestURL=_manifestURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
@end

