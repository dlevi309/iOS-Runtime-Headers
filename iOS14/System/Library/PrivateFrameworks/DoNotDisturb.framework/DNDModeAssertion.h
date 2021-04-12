/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, DNDModeAssertionDetails, DNDModeAssertionSource;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSDate* _startDate;
	DNDModeAssertionDetails* _details;
	DNDModeAssertionSource* _source;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                                  //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionDetails * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionSource * source;                //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)UUID;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(DNDModeAssertionDetails *)details;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(DNDModeAssertionSource *)source;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4 ;
@end

