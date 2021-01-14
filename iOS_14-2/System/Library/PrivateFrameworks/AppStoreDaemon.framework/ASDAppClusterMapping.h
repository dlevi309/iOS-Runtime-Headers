/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)itemID;
-(void)setClusterID:(NSNumber *)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)clusterID;
-(NSNumber *)usageWeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClusterVersion:(NSNumber *)arg1 ;
-(void)setLaunchesWeight:(NSNumber *)arg1 ;
-(void)setUsageWeight:(NSNumber *)arg1 ;
-(NSNumber *)clusterVersion;
-(NSNumber *)launchesWeight;
@end

