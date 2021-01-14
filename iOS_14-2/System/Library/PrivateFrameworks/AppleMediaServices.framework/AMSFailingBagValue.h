/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class NSError;

@interface AMSFailingBagValue : AMSFrozenBagValue {

	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
@end

