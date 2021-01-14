/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CTPerAppDataUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _displayName;
	NSArray* _used;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSArray * used;                      //@synthesize used=_used - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)used;
-(id)init:(id)arg1 withPeriods:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

