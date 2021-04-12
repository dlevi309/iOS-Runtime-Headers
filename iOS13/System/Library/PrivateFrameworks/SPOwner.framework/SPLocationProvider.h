/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setProvider:(SPHandle *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(SPHandle *)provider;
-(id)initWithTimestamp:(id)arg1 provider:(id)arg2 ;
@end

