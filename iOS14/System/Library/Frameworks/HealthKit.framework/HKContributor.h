/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface HKContributor : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _UUID;
	NSString* _appleID;
	NSString* _callerID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleID;               //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * callerID;              //@synthesize callerID=_callerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)UUID;
-(NSString *)callerID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 ;
-(NSString *)appleID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

