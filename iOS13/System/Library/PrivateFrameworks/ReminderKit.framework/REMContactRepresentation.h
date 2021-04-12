/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding> {

	NSArray* _phones;
	NSArray* _emails;

}

@property (nonatomic,copy) NSArray * phones;              //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSArray * emails;              //@synthesize emails=_emails - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationFromData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)phones;
-(void)setPhones:(NSArray *)arg1 ;
-(void)setEmails:(NSArray *)arg1 ;
-(NSArray *)emails;
-(id)archivedData;
-(id)initWithPhones:(id)arg1 emails:(id)arg2 ;
-(BOOL)matchesContactRepresentation:(id)arg1 ;
@end

