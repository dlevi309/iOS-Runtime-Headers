/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSNumber* _clusterID;
	NSNumber* _clusterVersion;
	NSNumber* _itemID;
	NSNumber* _launchesWeight;
	NSNumber* _usageWeight;

}

@property (nonatomic,copy) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * clusterID;                   //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSNumber * clusterVersion;              //@synthesize clusterVersion=_clusterVersion - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSNumber * launchesWeight;              //@synthesize launchesWeight=_launchesWeight - In the implementation block
@property (nonatomic,copy) NSNumber * usageWeight;                 //@synthesize usageWeight=_usageWeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setClusterID:(NSNumber *)arg1 ;
-(void)setClusterVersion:(NSNumber *)arg1 ;
-(void)setLaunchesWeight:(NSNumber *)arg1 ;
-(void)setUsageWeight:(NSNumber *)arg1 ;
-(NSNumber *)clusterID;
-(NSNumber *)clusterVersion;
-(NSNumber *)launchesWeight;
-(NSNumber *)usageWeight;
@end

