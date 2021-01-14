/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

