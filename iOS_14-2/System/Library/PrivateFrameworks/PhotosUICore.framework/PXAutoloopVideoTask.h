/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue, PXAutoloopVideoTaskDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSObject, NSError, NSString;

@interface PXAutoloopVideoTask : NSObject {

	NSObject*<OS_dispatch_queue> _performQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	void* _ivarQueueIdentifier;
	id<PXAutoloopVideoTaskDelegate> _ivarQueue_delegate;
	long long _ivarQueue_status;
	double _ivarQueue_progress;
	NSError* _ivarQueue_error;
	struct {
		BOOL respondsToProgressDidChange;
		BOOL respondsToStatusDidChange;
	}  _ivarQueue_delegateFlags;
	NSString* _temporaryFilesDirectory;

}

@property (assign,nonatomic,__weak) id<PXAutoloopVideoTaskDelegate> delegate; 
@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy,readonly) NSString * temporaryFilesDirectory;                    //@synthesize temporaryFilesDirectory=_temporaryFilesDirectory - In the implementation block
-(BOOL)_isRunning;
-(double)progress;
-(void)runWithInput:(id)arg1 ;
-(void)performTaskWithInput:(id)arg1 ;
-(void)setTemporaryFilesDirectory:(NSString *)arg1 ;
-(id)init;
-(BOOL)_isOnIvarQueue;
-(NSString *)temporaryFilesDirectory;
-(id<PXAutoloopVideoTaskDelegate>)delegate;
-(void)_performIvarRead:(/*^block*/id)arg1 ;
-(void)_performIvarWrite:(/*^block*/id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDelegate:(id<PXAutoloopVideoTaskDelegate>)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)_reset;
-(void)setStatus:(long long)arg1 ;
-(void)cancel;
-(long long)status;
@end

