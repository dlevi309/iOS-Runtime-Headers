/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPRecoveryKeyValidatorInternal.h>

@protocol CDPDRecoveryKeyValidatorInternalDelegate;
@class CDPContext, NSString;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal> {

	CDPContext* _context;
	id<CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
	BOOL _recoveryKeyVerified;
	NSString* _recoveryKey;

}

@property (assign,nonatomic) BOOL recoveryKeyVerified;              //@synthesize recoveryKeyVerified=_recoveryKeyVerified - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                  //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(BOOL)recoveryKeyVerified;
-(void)setRecoveryKeyVerified:(BOOL)arg1 ;
@end

