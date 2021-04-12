/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <BiometricSupport/BiometricMatchOperation.h>

@interface BiometricMatchOperationPearl : BiometricMatchOperation {

	BOOL _longTimeout;
	BOOL _autoRetry;

}

@property (assign,nonatomic) BOOL longTimeout;              //@synthesize longTimeout=_longTimeout - In the implementation block
@property (assign,nonatomic) BOOL autoRetry;                //@synthesize autoRetry=_autoRetry - In the implementation block
-(BOOL)longTimeout;
-(void)setLongTimeout:(BOOL)arg1 ;
-(BOOL)autoRetry;
-(void)setAutoRetry:(BOOL)arg1 ;
@end

