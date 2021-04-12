/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
@end

