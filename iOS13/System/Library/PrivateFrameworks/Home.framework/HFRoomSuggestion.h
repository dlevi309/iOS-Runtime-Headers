/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSSet;

@interface HFRoomSuggestion : NSObject {

	NSString* _name;
	NSSet* _aliases;
	long long _priority;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * aliases;              //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,readonly) long long priority;                //@synthesize priority=_priority - In the implementation block
+(/*^block*/id)priorityComparator;
+(id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3 ;
+(id)suggestionWithName:(id)arg1 priority:(long long)arg2 ;
-(NSString *)name;
-(long long)priority;
-(NSSet *)aliases;
@end

