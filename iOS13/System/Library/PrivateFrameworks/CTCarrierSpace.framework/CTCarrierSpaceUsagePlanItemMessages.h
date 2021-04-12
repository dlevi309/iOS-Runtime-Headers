/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)capacity;
-(void)setCapacity:(NSString *)arg1 ;
-(NSString *)used;
-(void)setUsed:(NSString *)arg1 ;
@end

