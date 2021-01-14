/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)changes;
-(NSString *)storeID;
-(REMObjectID *)accountID;
-(NSString *)author;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMChangeToken *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

