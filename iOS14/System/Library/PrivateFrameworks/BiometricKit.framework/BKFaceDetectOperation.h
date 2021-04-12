/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKPresenceDetectOperation.h>

@interface BKFaceDetectOperation : BKPresenceDetectOperation {

	BOOL _highPriority;
	long long _mode;
	double _timeout;

}

@property (assign,nonatomic) long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double timeout;                                                 //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                                              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic,__weak) id<BKFaceDetectOperationDelegate> delegate; 
-(id)initWithDevice:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(long long)mode;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setMode:(long long)arg1 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(BOOL)highPriority;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
@end

