/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, SPHandle;

@interface SPLocationProvider : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	SPHandle* _provider;

}

@property (nonatomic,copy) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) SPHandle * provider;              //@synthesize provider=_provider - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProvider:(SPHandle *)arg1 ;
-(SPHandle *)provider;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithTimestamp:(id)arg1 provider:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

