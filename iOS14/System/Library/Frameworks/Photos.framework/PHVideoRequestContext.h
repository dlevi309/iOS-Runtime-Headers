/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext : PHMediaRequestContext {

	NSProgress* _progress;
	PHVideoRequestOptions* _videoOptions;
	long long _intent;

}

@property (nonatomic,readonly) PHVideoRequestOptions * videoOptions;              //@synthesize videoOptions=_videoOptions - In the implementation block
@property (nonatomic,readonly) long long intent;                                  //@synthesize intent=_intent - In the implementation block
-(long long)intent;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)progresses;
-(id)_lazyProgress;
-(id)initialRequests;
-(long long)type;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(/*^block*/id)arg7 ;
-(PHVideoRequestOptions *)videoOptions;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)shouldReportProgress;
-(/*^block*/id)progressHandler;
@end

