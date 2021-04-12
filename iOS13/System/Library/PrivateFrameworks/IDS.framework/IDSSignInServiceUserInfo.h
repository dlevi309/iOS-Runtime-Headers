/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@interface IDSSignInServiceUserInfo : NSObject {

	unsigned long long _type;
	unsigned long long _status;

}

@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)status;
-(id)initWithUserType:(unsigned long long)arg1 status:(unsigned long long)arg2 ;
@end

