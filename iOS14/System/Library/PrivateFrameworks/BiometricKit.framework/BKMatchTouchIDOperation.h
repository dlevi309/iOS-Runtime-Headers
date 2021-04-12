/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKMatchOperation.h>

@interface BKMatchTouchIDOperation : BKMatchOperation {

	BOOL _requireFingerOff;

}

@property (assign,nonatomic,__weak) id<BKMatchTouchIDOperationDelegate> delegate; 
@property (assign,nonatomic) BOOL requireFingerOff;                                            //@synthesize requireFingerOff=_requireFingerOff - In the implementation block
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(BOOL)requireFingerOff;
-(void)setRequireFingerOff:(BOOL)arg1 ;
@end

