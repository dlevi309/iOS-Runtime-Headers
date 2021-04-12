/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class INIntent, INIntentResponse, NSSet;

@interface INCExtensionTransactionState : NSObject {

	long long _type;
	INIntent* _intent;
	INIntentResponse* _intentResponse;
	NSSet* _userActivities;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentResponse * intentResponse;              //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,copy,readonly) NSSet * userActivities;                    //@synthesize userActivities=_userActivities - In the implementation block
-(id)description;
-(long long)type;
-(INIntent *)intent;
-(INIntentResponse *)intentResponse;
-(NSSet *)userActivities;
-(id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4 ;
@end

