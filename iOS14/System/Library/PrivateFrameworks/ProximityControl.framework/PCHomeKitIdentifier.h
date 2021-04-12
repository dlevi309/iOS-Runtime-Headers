/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface PCHomeKitIdentifier : NSObject <NSSecureCoding> {

	NSUUID* _accessoryID;
	NSUUID* _homeID;

}

@property (nonatomic,copy,readonly) NSUUID * accessoryID;              //@synthesize accessoryID=_accessoryID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * homeID;                   //@synthesize homeID=_homeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)homeID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)accessoryID;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccessoryID:(id)arg1 homeID:(id)arg2 ;
@end

