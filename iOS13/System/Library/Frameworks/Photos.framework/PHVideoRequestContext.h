/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(long long)intent;
-(/*^block*/id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(id)_lazyProgress;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)shouldReportProgress;
-(BOOL)representsShareableHighQualityResource;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(/*^block*/id)arg7 ;
-(PHVideoRequestOptions *)videoOptions;
@end

