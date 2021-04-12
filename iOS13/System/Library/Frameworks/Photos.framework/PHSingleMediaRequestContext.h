/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHMediaRequest;

@interface PHSingleMediaRequestContext : PHMediaRequestContext {

	NSProgress* _progress;
	long long _type;
	BOOL _networkAccessAllowed;
	PHMediaRequest* _request;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) PHMediaRequest * request;              //@synthesize request=_request - In the implementation block
+(id)avProxyRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
+(long long)_indexOfAvProxyFromResources:(id)arg1 hasAdjustments:(BOOL)arg2 version:(long long)arg3 ;
-(long long)type;
-(void)setRequest:(PHMediaRequest *)arg1 ;
-(PHMediaRequest *)request;
-(/*^block*/id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 type:(long long)arg5 networkAccessAllowed:(BOOL)arg6 progressHandler:(/*^block*/id)arg7 resultHandler:(/*^block*/id)arg8 ;
-(id)_lazyProgress;
-(BOOL)isSynchronous;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
@end

