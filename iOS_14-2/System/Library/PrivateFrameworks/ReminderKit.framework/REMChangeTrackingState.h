/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMChangeToken, NSDate;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding> {

	REMChangeToken* _lastConsumedChangeToken;
	NSDate* _lastConsumedDate;

}

@property (nonatomic,retain) NSDate * lastConsumedDate;                             //@synthesize lastConsumedDate=_lastConsumedDate - In the implementation block
@property (nonatomic,retain) REMChangeToken * lastConsumedChangeToken;              //@synthesize lastConsumedChangeToken=_lastConsumedChangeToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REMChangeToken *)lastConsumedChangeToken;
-(NSDate *)lastConsumedDate;
-(void)setLastConsumedChangeToken:(REMChangeToken *)arg1 ;
-(void)setLastConsumedDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

