/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bundleIDs;
-(id)initWithBundleIDs:(id)arg1 ;
@end

