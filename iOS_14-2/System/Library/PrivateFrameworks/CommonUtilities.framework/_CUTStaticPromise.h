/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {

	CUTResult* _result;
	BOOL _safe;

}

@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
-(id)then:(/*^block*/id)arg1 ;
-(void)setResult:(CUTResult *)arg1 ;
-(id)initWithResult:(id)arg1 safe:(BOOL)arg2 ;
-(CUTResult *)result;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end

