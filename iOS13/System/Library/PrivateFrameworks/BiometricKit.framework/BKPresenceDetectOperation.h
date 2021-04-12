/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKOperation.h>

@interface BKPresenceDetectOperation : BKOperation {

	long long _priority;

}

@property (assign,nonatomic) long long priority;              //@synthesize priority=_priority - In the implementation block
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
@end

