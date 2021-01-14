/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMFetchResultToken, NSString;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding> {

	REMFetchResultToken* _fetchResultTokenToDiffAgainst;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMFetchResultToken * fetchResultTokenToDiffAgainst;              //@synthesize fetchResultTokenToDiffAgainst=_fetchResultTokenToDiffAgainst - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithFetchResultTokenToDiffAgainst:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMFetchResultToken *)fetchResultTokenToDiffAgainst;
@end

