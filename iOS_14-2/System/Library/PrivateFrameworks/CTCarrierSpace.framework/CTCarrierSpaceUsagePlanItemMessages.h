/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemMessages : NSObject <NSSecureCoding> {

	NSString* _capacity;
	NSString* _used;

}

@property (nonatomic,retain) NSString * capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSString * used;                  //@synthesize used=_used - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)used;
-(void)setCapacity:(NSString *)arg1 ;
-(void)setUsed:(NSString *)arg1 ;
-(id)init;
-(NSString *)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

