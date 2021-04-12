/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMChangeToken *)lastConsumedChangeToken;
-(NSDate *)lastConsumedDate;
-(void)setLastConsumedChangeToken:(REMChangeToken *)arg1 ;
-(void)setLastConsumedDate:(NSDate *)arg1 ;
@end

