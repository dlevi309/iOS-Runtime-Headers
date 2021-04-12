/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usingModernUpdatesCheck;
	NSDate* _lastUpdateCheck;
	NSDate* _nextUpdateCheck;

}

@property (nonatomic,copy) NSDate * lastUpdateCheck;                    //@synthesize lastUpdateCheck=_lastUpdateCheck - In the implementation block
@property (nonatomic,copy) NSDate * nextUpdateCheck;                    //@synthesize nextUpdateCheck=_nextUpdateCheck - In the implementation block
@property (assign,nonatomic) BOOL usingModernUpdatesCheck;              //@synthesize usingModernUpdatesCheck=_usingModernUpdatesCheck - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdateCheck;
-(void)setLastUpdateCheck:(NSDate *)arg1 ;
-(NSDate *)nextUpdateCheck;
-(void)setNextUpdateCheck:(NSDate *)arg1 ;
-(BOOL)usingModernUpdatesCheck;
-(void)setUsingModernUpdatesCheck:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

