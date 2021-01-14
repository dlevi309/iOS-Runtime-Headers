/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPhones:(NSArray *)arg1 ;
-(NSArray *)phones;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emails;
-(id)description;
-(void)setEmails:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhones:(id)arg1 emails:(id)arg2 ;
-(BOOL)matchesContactRepresentation:(id)arg1 ;
-(id)archivedData;
-(BOOL)isEqual:(id)arg1 ;
@end

