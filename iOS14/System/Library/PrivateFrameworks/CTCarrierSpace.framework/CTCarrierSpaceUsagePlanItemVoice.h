/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemVoice : NSObject <NSSecureCoding> {

	NSString* _minutesCapacity;
	NSString* _minutesUsed;

}

@property (nonatomic,retain) NSString * minutesCapacity;              //@synthesize minutesCapacity=_minutesCapacity - In the implementation block
@property (nonatomic,retain) NSString * minutesUsed;                  //@synthesize minutesUsed=_minutesUsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)minutesUsed;
-(NSString *)minutesCapacity;
-(void)setMinutesUsed:(NSString *)arg1 ;
-(id)init;
-(void)setMinutesCapacity:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

