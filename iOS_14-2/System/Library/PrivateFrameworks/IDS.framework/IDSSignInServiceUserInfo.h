/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithUserType:(unsigned long long)arg1 status:(unsigned long long)arg2 ;
-(unsigned long long)status;
@end

