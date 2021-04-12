/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNContactsLogger;
#import <Contacts/Contacts-Structs.h>
@interface CNTCC : NSObject {

	BOOL _simulateAccessPrompt;
	BOOL _simulateAccessPromptGranted;
	id<CNContactsLogger> _logger;
	long long _simulateType;
	double _simulateAccessPromptDelay;

}

@property (nonatomic,readonly) id<CNContactsLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) long long simulateType;                        //@synthesize simulateType=_simulateType - In the implementation block
@property (assign,nonatomic) BOOL simulateAccessPrompt;                     //@synthesize simulateAccessPrompt=_simulateAccessPrompt - In the implementation block
@property (assign,nonatomic) BOOL simulateAccessPromptGranted;              //@synthesize simulateAccessPromptGranted=_simulateAccessPromptGranted - In the implementation block
@property (assign,nonatomic) double simulateAccessPromptDelay;              //@synthesize simulateAccessPromptDelay=_simulateAccessPromptDelay - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<CNContactsLogger>)logger;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_simulateQueue;
-(BOOL)simulateAccessPrompt;
-(void)setSimulateAccessPrompt:(BOOL)arg1 ;
-(double)simulateAccessPromptDelay;
-(BOOL)simulateAccessPromptGranted;
-(void)setSimulateType:(long long)arg1 ;
-(long long)simulateType;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned char)checkAuditToken:(SCD_Struct_CN1)arg1 ;
-(void)simulate:(long long)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)setSimulateAccessPromptGranted:(BOOL)arg1 ;
-(void)setSimulateAccessPromptDelay:(double)arg1 ;
@end

