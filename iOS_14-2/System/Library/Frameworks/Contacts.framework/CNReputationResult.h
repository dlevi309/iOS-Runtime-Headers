/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithHandle:(id)arg1 score:(long long)arg2 ;
-(CNReputationHandle *)handle;
-(long long)score;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

