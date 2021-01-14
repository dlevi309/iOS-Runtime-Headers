/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequestContext.h>

@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext {

	PHImageRequestOptions* _options;

}

@property (nonatomic,readonly) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(PHImageRequestOptions *)options;
-(id)initialRequests;
-(long long)type;
-(BOOL)isNetworkAccessAllowed;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
@end

