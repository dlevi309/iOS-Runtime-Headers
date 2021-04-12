/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMChangeToken.h>

@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken {

	NSPersistentHistoryToken* _token;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * token;              //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSPersistentHistoryToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)compareToken:(id)arg1 error:(id*)arg2 ;
-(id)initWithPersistentHistoryToken:(id)arg1 ;
@end

