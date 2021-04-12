/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {

	long long _status;
	long long _request;
	long long _mode;
	NSDate* _anchorLimitModifiedDate;

}

@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long request;                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long mode;                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSDate * anchorLimitModifiedDate;              //@synthesize anchorLimitModifiedDate=_anchorLimitModifiedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordWithStatus:(long long)arg1 request:(long long)arg2 mode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(long long)mode;
-(long long)request;
-(void)setStatus:(long long)arg1 ;
-(BOOL)sharingEnabled;
-(id)_deepCopy;
-(id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(NSDate *)anchorLimitModifiedDate;
-(BOOL)requestedSharing;
-(BOOL)requestedReading;
-(BOOL)deniedSharing;
-(BOOL)deniedReading;
-(BOOL)readingEnabled;
-(BOOL)isCompatibleStatus:(long long)arg1 ;
-(id)recordWithReadingDisabled;
-(id)recordWithSharingDisabled;
@end

