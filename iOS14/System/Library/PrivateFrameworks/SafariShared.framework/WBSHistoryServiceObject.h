/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WBSHistoryServiceObject : NSObject <NSSecureCoding> {

	long long _databaseID;

}

@property (nonatomic,readonly) long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDatabaseID:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseID;
@end

