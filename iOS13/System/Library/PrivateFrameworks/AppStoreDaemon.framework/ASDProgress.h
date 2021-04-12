/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)reportRemotely;
-(void)setReportRemotely:(BOOL)arg1 ;
@end

