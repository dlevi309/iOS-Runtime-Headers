/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(INIntent *)intent;
-(id)description;
-(NSSet *)userActivities;
-(long long)type;
-(INIntentResponse *)intentResponse;
-(id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4 ;
@end

