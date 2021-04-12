/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject {

	CUTUnsafePromise* _promise;

}

@property (nonatomic,retain) CUTUnsafePromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)init;
-(void)fulfillWithValue:(id)arg1 ;
-(CUTUnsafePromise *)promise;
-(void)setPromise:(CUTUnsafePromise *)arg1 ;
-(void)failWithError:(id)arg1 ;
@end

