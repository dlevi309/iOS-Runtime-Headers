/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(NSString *)identifier;
-(id)initWithAccountType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
@end

