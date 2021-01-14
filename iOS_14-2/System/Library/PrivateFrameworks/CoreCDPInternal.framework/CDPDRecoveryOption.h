/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class NSString;

@interface CDPDRecoveryOption : NSObject {

	NSString* _localizedRecoveryOption;
	/*^block*/id _recoveryHandler;
	long long _recoveryOptionIndex;

}

@property (nonatomic,copy) NSString * localizedRecoveryOption;              //@synthesize localizedRecoveryOption=_localizedRecoveryOption - In the implementation block
@property (nonatomic,copy) id recoveryHandler;                              //@synthesize recoveryHandler=_recoveryHandler - In the implementation block
@property (assign,nonatomic) long long recoveryOptionIndex;                 //@synthesize recoveryOptionIndex=_recoveryOptionIndex - In the implementation block
-(NSString *)localizedRecoveryOption;
-(id)recoveryHandler;
-(void)setLocalizedRecoveryOption:(NSString *)arg1 ;
-(void)setRecoveryHandler:(id)arg1 ;
-(long long)recoveryOptionIndex;
-(void)setRecoveryOptionIndex:(long long)arg1 ;
@end

