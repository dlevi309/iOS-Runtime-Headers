/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _accountIdentifier;
	unsigned long long _info;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long info;                      //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)info;
-(NSUUID *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 info:(unsigned long long)arg2 ;
-(id)formattedInfoStringJoinedByString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

