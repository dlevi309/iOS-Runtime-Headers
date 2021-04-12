/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding> {

	NSDictionary* _persistentHistoryTokens;

}

@property (nonatomic,readonly) NSDictionary * persistentHistoryTokens;              //@synthesize persistentHistoryTokens=_persistentHistoryTokens - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fetchResultTokenFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPersistentHistoryTokens:(id)arg1 ;
-(NSDictionary *)persistentHistoryTokens;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

