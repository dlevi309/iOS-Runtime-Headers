/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSweetgumUsagePlanItemVoice : NSObject <NSSecureCoding> {

	NSString* _minutesCapacity;
	NSString* _minutesUsed;

}

@property (nonatomic,retain) NSString * minutesCapacity;              //@synthesize minutesCapacity=_minutesCapacity - In the implementation block
@property (nonatomic,retain) NSString * minutesUsed;                  //@synthesize minutesUsed=_minutesUsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)minutesCapacity;
-(NSString *)minutesUsed;
-(void)setMinutesCapacity:(NSString *)arg1 ;
-(void)setMinutesUsed:(NSString *)arg1 ;
@end

