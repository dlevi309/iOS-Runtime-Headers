/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSUUID;

@interface HDClinicalIngestionTaskPerAccountInfo : NSObject {

	NSUUID* _accountIdentifier;
	unsigned long long _outcomeInfo;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long outcomeInfo;                 //@synthesize outcomeInfo=_outcomeInfo - In the implementation block
-(NSUUID *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(unsigned long long)outcomeInfo;
-(void)addOutcomeInfo:(unsigned long long)arg1 ;
-(void)setOutcomeInfo:(unsigned long long)arg1 ;
@end

