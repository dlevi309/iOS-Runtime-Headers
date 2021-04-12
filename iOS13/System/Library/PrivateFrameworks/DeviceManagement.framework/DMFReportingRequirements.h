/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requireActiveConnection;
	NSString* _reachableHostName;
	double _updateCoalescenceInterval;

}

@property (nonatomic,copy) NSString * reachableHostName;                    //@synthesize reachableHostName=_reachableHostName - In the implementation block
@property (assign,nonatomic) double updateCoalescenceInterval;              //@synthesize updateCoalescenceInterval=_updateCoalescenceInterval - In the implementation block
@property (assign,nonatomic) BOOL requireActiveConnection;                  //@synthesize requireActiveConnection=_requireActiveConnection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reachableHostName;
-(double)updateCoalescenceInterval;
-(BOOL)requireActiveConnection;
-(void)setReachableHostName:(NSString *)arg1 ;
-(void)setUpdateCoalescenceInterval:(double)arg1 ;
-(void)setRequireActiveConnection:(BOOL)arg1 ;
@end

