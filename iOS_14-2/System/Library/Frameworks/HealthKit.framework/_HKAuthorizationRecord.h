/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mode;
-(BOOL)isCompatibleStatus:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(BOOL)deniedSharing;
-(long long)request;
-(BOOL)requestedSharing;
-(id)description;
-(BOOL)requestedReading;
-(NSDate *)anchorLimitModifiedDate;
-(id)recordWithSharingDisabled;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)deniedReading;
-(void)setStatus:(long long)arg1 ;
-(id)recordWithReadingDisabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)readingEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(BOOL)sharingEnabled;
@end

