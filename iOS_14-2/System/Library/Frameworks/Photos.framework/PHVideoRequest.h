/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequest.h>

@protocol PHMediaRequestDelegate;
@class PHVideoResult, PLProgressFollower, PHImageDisplaySpec, PHVideoRequestBehaviorSpec;

@interface PHVideoRequest : PHMediaRequest {

	PHVideoResult* _videoResult;
	PLProgressFollower* _progressFollower;
	os_unfair_lock_s _lock;
	id<PHMediaRequestDelegate> _delegate;
	PHImageDisplaySpec* _displaySpec;
	PHVideoRequestBehaviorSpec* _behaviorSpec;

}

@property (nonatomic,__weak,readonly) id<PHMediaRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PHImageDisplaySpec * displaySpec;                        //@synthesize displaySpec=_displaySpec - In the implementation block
@property (nonatomic,readonly) PHVideoRequestBehaviorSpec * behaviorSpec;               //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
-(PHVideoRequestBehaviorSpec *)behaviorSpec;
-(void)startRequest;
-(id<PHMediaRequestDelegate>)delegate;
-(BOOL)isSynchronous;
-(BOOL)isNetworkAccessAllowed;
-(void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSpec:(id)arg7 delegate:(id)arg8 ;
-(void)_finish;
-(void)cancel;
-(PHImageDisplaySpec *)displaySpec;
@end

