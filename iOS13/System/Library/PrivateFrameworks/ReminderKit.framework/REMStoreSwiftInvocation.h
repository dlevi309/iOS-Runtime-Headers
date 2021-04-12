/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFetchResultTokenToDiffAgainst:(id)arg1 ;
-(REMFetchResultToken *)fetchResultTokenToDiffAgainst;
@end

