/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class NSString, NSNumber, NSData;

@interface PKAuthenticatorEvaluationRequest : NSObject {

	BOOL _useStockAuthInterface;
	BOOL _assumeUserIntentAvailable;
	long long _policy;
	NSString* _reason;
	NSString* _processName;
	NSNumber* _processIdentifier;
	NSString* _PINTitle;
	NSNumber* _PINLength;
	NSData* _externalizedContext;
	SecAccessControlRef _accessControlRef;
	NSString* _physicalButtonTitle;
	NSString* _passcodeTitle;

}

@property (nonatomic,readonly) long long policy;                                //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * processName;                              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) NSNumber * processIdentifier;                        //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * PINTitle;                                 //@synthesize PINTitle=_PINTitle - In the implementation block
@property (nonatomic,copy) NSNumber * PINLength;                                //@synthesize PINLength=_PINLength - In the implementation block
@property (nonatomic,retain) NSData * externalizedContext;                      //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,nonatomic) SecAccessControlRef accessControlRef;              //@synthesize accessControlRef=_accessControlRef - In the implementation block
@property (assign,nonatomic) BOOL useStockAuthInterface;                        //@synthesize useStockAuthInterface=_useStockAuthInterface - In the implementation block
@property (nonatomic,copy) NSString * physicalButtonTitle;                      //@synthesize physicalButtonTitle=_physicalButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * passcodeTitle;                            //@synthesize passcodeTitle=_passcodeTitle - In the implementation block
@property (assign,nonatomic) BOOL assumeUserIntentAvailable;                    //@synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(NSNumber *)processIdentifier;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSData *)externalizedContext;
-(long long)policy;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithPolicy:(long long)arg1 ;
-(void)setProcessIdentifier:(NSNumber *)arg1 ;
-(void)setPINLength:(NSNumber *)arg1 ;
-(NSNumber *)PINLength;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(void)setPINTitle:(NSString *)arg1 ;
-(void)setAccessControlRef:(SecAccessControlRef)arg1 ;
-(void)setPasscodeTitle:(NSString *)arg1 ;
-(void)setAssumeUserIntentAvailable:(BOOL)arg1 ;
-(SecAccessControlRef)accessControlRef;
-(NSString *)PINTitle;
-(BOOL)useStockAuthInterface;
-(void)setUseStockAuthInterface:(BOOL)arg1 ;
-(NSString *)physicalButtonTitle;
-(void)setPhysicalButtonTitle:(NSString *)arg1 ;
-(NSString *)passcodeTitle;
-(BOOL)assumeUserIntentAvailable;
@end

