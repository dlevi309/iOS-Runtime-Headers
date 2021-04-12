/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding> {

	BOOL _reportRemotely;
	NSString* _bundleID;
	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign) BOOL reportRemotely;                       //@synthesize reportRemotely=_reportRemotely - In the implementation block
@property (assign) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)totalUnitCount;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReportRemotely:(BOOL)arg1 ;
-(BOOL)reportRemotely;
-(long long)completedUnitCount;
@end

