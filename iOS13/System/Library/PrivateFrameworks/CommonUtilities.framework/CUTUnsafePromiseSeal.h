/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject {

	CUTUnsafePromise* _promise;

}

@property (nonatomic,retain) CUTUnsafePromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)init;
-(void)failWithError:(id)arg1 ;
-(CUTUnsafePromise *)promise;
-(void)fulfillWithValue:(id)arg1 ;
-(void)setPromise:(CUTUnsafePromise *)arg1 ;
@end

