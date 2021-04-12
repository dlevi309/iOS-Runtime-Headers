/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class AMSPromise;

@interface AMSBridgedBagValue : AMSFrozenBagValue {

	AMSPromise* _valuePromise;

}

@property (nonatomic,retain) AMSPromise * valuePromise;              //@synthesize valuePromise=_valuePromise - In the implementation block
-(id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3 ;
-(AMSPromise *)valuePromise;
-(void)setValuePromise:(AMSPromise *)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
@end

