/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequestContext.h>

@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext {

	PHImageRequestOptions* _options;

}

@property (nonatomic,readonly) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
-(PHImageRequestOptions *)options;
-(long long)type;
-(BOOL)isNetworkAccessAllowed;
-(id)initialRequests;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
@end

