/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPRecoveryKeyValidatorInternal.h>

@protocol CDPAuthProviderInternal;
@class CDPContext, NSDictionary, NSString;

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal> {

	id<CDPAuthProviderInternal> _authProvider;
	CDPContext* _context;
	NSDictionary* _recoveredInfo;
	NSString* _recoveryKey;

}

@property (nonatomic,copy) NSDictionary * recoveredInfo;              //@synthesize recoveredInfo=_recoveredInfo - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                    //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(void)setRecoveredInfo:(NSDictionary *)arg1 ;
-(id)_cdpErrorFromAuthKitError:(id)arg1 ;
-(id)initWithContext:(id)arg1 authProvider:(id)arg2 ;
-(NSDictionary *)recoveredInfo;
@end

