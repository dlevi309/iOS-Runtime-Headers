/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol _PXCompletionHandlerManagerDelegate;
@class NSMutableArray;

@interface _PXCompletionHandlerManager : NSObject {

	NSMutableArray* _completionHandlers;
	id<_PXCompletionHandlerManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PXCompletionHandlerManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id<_PXCompletionHandlerManagerDelegate>)delegate;
-(void)_handleTimeoutOfCompletionHandler:(/*^block*/id)arg1 ;
-(void)callCompletionHandlers;
-(void)setDelegate:(id<_PXCompletionHandlerManagerDelegate>)arg1 ;
@end

