/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@class CUTPromise;

@interface CUTPromiseSeal : NSObject {

	CUTPromise* _promise;

}

@property (nonatomic,retain) CUTPromise * promise;              //@synthesize promise=_promise - In the implementation block
-(void)failWithError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(CUTPromise *)promise;
-(void)fulfillWithValue:(id)arg1 ;
-(void)setPromise:(CUTPromise *)arg1 ;
@end

