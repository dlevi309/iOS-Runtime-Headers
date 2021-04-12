/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding> {

	NSDictionary* _persistentHistoryTokens;

}

@property (nonatomic,readonly) NSDictionary * persistentHistoryTokens;              //@synthesize persistentHistoryTokens=_persistentHistoryTokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPersistentHistoryTokens:(id)arg1 ;
-(NSDictionary *)persistentHistoryTokens;
@end

