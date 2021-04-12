/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse {

	NSArray* _bundleIDs;

}

@property (nonatomic,readonly) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (assign) BOOL success; 
+(BOOL)supportsSecureCoding;
-(NSArray *)bundleIDs;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIDs:(id)arg1 ;
@end

