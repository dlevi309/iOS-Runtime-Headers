/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class NSError;

@interface AMSFailingBagValue : AMSFrozenBagValue {

	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
@end

