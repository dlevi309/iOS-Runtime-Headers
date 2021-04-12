/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {

	CUTResult* _result;

}

@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end

