/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)dataUsed;
-(NSString *)username;
-(unsigned long long)dataQuota;
-(BOOL)hasDataToSync;
-(BOOL)isCurrentUser;
-(id)initWithUsername:(id)arg1 dataQuota:(unsigned long long)arg2 dataUsed:(unsigned long long)arg3 hasDataToSync:(BOOL)arg4 isCurrentUser:(BOOL)arg5 ;
@end

