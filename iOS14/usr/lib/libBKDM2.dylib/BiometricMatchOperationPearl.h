/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <BiometricSupport/BiometricMatchOperation.h>

@interface BiometricMatchOperationPearl : BiometricMatchOperation {

	BOOL _longTimeout;
	BOOL _autoRetry;

}

@property (assign,nonatomic) BOOL longTimeout;              //@synthesize longTimeout=_longTimeout - In the implementation block
@property (assign,nonatomic) BOOL autoRetry;                //@synthesize autoRetry=_autoRetry - In the implementation block
-(void)setLongTimeout:(BOOL)arg1 ;
-(BOOL)longTimeout;
-(BOOL)autoRetry;
-(void)setAutoRetry:(BOOL)arg1 ;
@end

