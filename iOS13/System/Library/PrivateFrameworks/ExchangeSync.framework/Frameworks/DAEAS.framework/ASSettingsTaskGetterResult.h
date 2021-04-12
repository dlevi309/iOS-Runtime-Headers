/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)key;
-(id)result;
-(long long)status;
-(void)setKey:(int)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3 ;
@end

