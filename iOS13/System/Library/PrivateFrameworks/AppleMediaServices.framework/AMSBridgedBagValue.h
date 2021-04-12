/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class AMSPromise;

@interface AMSBridgedBagValue : AMSFrozenBagValue {

	AMSPromise* _valuePromise;

}

@property (nonatomic,retain) AMSPromise * valuePromise;              //@synthesize valuePromise=_valuePromise - In the implementation block
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3 ;
-(AMSPromise *)valuePromise;
-(void)setValuePromise:(AMSPromise *)arg1 ;
@end

