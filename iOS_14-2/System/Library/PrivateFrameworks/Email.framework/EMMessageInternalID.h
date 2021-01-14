/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class NSString;

@interface EMMessageInternalID : NSObject {

	long long _databaseID;
	NSString* _externalID;

}

@property (nonatomic,readonly) long long databaseID;                    //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(NSString *)externalID;
-(id)initWithDatabaseID:(long long)arg1 externalID:(id)arg2 ;
-(long long)databaseID;
@end

