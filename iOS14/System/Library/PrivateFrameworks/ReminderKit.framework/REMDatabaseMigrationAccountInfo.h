/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSString;

@interface REMDatabaseMigrationAccountInfo : NSObject {

	NSString* _identifier;
	NSString* _name;
	long long _type;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(id)initWithAccountType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(long long)type;
-(NSString *)identifier;
@end

