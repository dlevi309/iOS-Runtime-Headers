/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(void)setRequest:(PHMediaRequest *)arg1 ;
-(BOOL)isSynchronous;
-(PHMediaRequest *)request;
-(id)progresses;
-(id)_lazyProgress;
-(id)initialRequests;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 type:(long long)arg5 networkAccessAllowed:(BOOL)arg6 progressHandler:(/*^block*/id)arg7 resultHandler:(/*^block*/id)arg8 ;
-(long long)type;
-(BOOL)isNetworkAccessAllowed;
-(/*^block*/id)progressHandler;
@end

