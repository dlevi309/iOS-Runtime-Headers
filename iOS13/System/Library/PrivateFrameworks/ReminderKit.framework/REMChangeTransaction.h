/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, REMObjectID, NSString, REMChangeToken;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	NSArray* _changes;
	REMObjectID* _accountID;
	NSString* _storeID;
	NSString* _author;
	REMChangeToken* _token;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * changes;                    //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) NSString * author;                    //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) REMChangeToken * token;               //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REMChangeToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)changes;
-(NSString *)author;
-(REMObjectID *)accountID;
-(NSString *)storeID;
@end

