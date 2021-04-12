/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(id)createEnrollProgressInfo:(unsigned)arg1 ;
@end

