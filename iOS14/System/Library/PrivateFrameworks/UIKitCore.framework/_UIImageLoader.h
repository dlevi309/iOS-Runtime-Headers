/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSError, NSMutableArray;

@interface _UIImageLoader : NSObject {

	atomic_flag _started;
	AB _finished;
	AB _cancelled;
	UIImage* _image;
	NSError* _error;
	os_unfair_lock_s _trampolineLock;
	NSMutableArray* _completionTrampolines;

}

@property (readonly) BOOL _isFinished; 
@property (readonly) BOOL _isCancelled; 
@property (readonly) UIImage * _image; 
@property (readonly) NSError * _error; 
+(id)_imageLoaderWithLoadingQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)_imageLoaderWithURLRequest:(id)arg1 session:(id)arg2 ;
+(id)_imageLoaderWithDataFromItemProvider:(id)arg1 typeIdentifier:(id)arg2 ;
-(NSError *)_error;
-(UIImage *)_image;
-(id)init;
-(BOOL)_isFinished;
-(BOOL)_isCancelled;
-(void)_cancel;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
-(void)_loadImageWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_really_cancel;
@end

