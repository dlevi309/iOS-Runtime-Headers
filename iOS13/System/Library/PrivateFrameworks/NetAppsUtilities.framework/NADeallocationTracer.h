/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@protocol NADeallocationTracerDelegate;
@interface NADeallocationTracer : NSObject {

	id<NADeallocationTracerDelegate> _delegate;

}

@property (assign,nonatomic) id<NADeallocationTracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NADeallocationTracerDelegate>)delegate;
-(void)setDelegate:(id<NADeallocationTracerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

