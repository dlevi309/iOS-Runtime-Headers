/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@interface ASSettingsTaskGetterResult : NSObject {

	int _key;
	long long _status;
	id _result;

}

@property (assign,nonatomic) int key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                     //@synthesize result=_result - In the implementation block
-(void)setResult:(id)arg1 ;
-(int)key;
-(id)result;
-(void)setStatus:(long long)arg1 ;
-(void)setKey:(int)arg1 ;
-(long long)status;
-(id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3 ;
@end

