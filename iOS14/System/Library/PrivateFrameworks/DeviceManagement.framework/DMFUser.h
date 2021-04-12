/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFUser : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasDataToSync;
	BOOL _isCurrentUser;
	NSString* _username;
	unsigned long long _dataQuota;
	unsigned long long _dataUsed;

}

@property (nonatomic,copy,readonly) NSString * username;                  //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) unsigned long long dataQuota;              //@synthesize dataQuota=_dataQuota - In the implementation block
@property (nonatomic,readonly) unsigned long long dataUsed;               //@synthesize dataUsed=_dataUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasDataToSync;                        //@synthesize hasDataToSync=_hasDataToSync - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentUser;                        //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isCurrentUser;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)dataQuota;
-(NSString *)username;
-(id)description;
-(BOOL)hasDataToSync;
-(id)initWithUsername:(id)arg1 dataQuota:(unsigned long long)arg2 dataUsed:(unsigned long long)arg3 hasDataToSync:(BOOL)arg4 isCurrentUser:(BOOL)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)dataUsed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

