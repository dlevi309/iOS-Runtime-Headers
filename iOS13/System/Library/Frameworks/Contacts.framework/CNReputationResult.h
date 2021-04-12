/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNReputationHandle;

@interface CNReputationResult : NSObject {

	CNReputationHandle* _handle;
	long long _score;

}

@property (copy,readonly) CNReputationHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (readonly) long long score;                               //@synthesize score=_score - In the implementation block
+(id)descriptionForScore:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CNReputationHandle *)handle;
-(long long)score;
-(id)initWithHandle:(id)arg1 score:(long long)arg2 ;
@end

