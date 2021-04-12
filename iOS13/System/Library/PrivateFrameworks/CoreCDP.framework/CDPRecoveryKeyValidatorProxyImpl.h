/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/CDPRecoveryKeyValidator.h>

@protocol CDPRecoveryKeyValidator;
@class NSString;

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator> {

	id<CDPRecoveryKeyValidator> _validator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(id)generateRecoveryKeyWithError:(id*)arg1 ;
-(BOOL)confirmRecoveryKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithRemoteObject:(id)arg1 ;
@end

