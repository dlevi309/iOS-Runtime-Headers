/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/

#import <DataAccessExpress/DataAccessExpress-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {

	NSString* _accountID;
	long long _dataclass;

}

@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long dataclass;               //@synthesize dataclass=_dataclass - In the implementation block
-(NSString *)accountID;
-(long long)dataclass;
-(id)description;
-(unsigned long long)hash;
-(id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

