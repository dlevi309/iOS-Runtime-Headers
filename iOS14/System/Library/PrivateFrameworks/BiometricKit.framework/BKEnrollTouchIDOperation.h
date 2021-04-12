/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BKEnrollOperation.h>

@class BiometricKitStatistics;

@interface BKEnrollTouchIDOperation : BKEnrollOperation {

	BiometricKitStatistics* _statistics;
	SCD_Struct_Bi1* _compSet;

}

@property (assign,nonatomic,__weak) id<BKEnrollTouchIDOperationDelegate> delegate; 
-(id)initWithDevice:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(BOOL)startWithError:(id*)arg1 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)createEnrollProgressInfo:(unsigned)arg1 ;
@end

