/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/


@protocol SFFeedbackListener;
@interface WeakListener : NSObject {

	id<SFFeedbackListener> _weakListener;

}

@property (nonatomic,readonly) id<SFFeedbackListener> strongListener; 
-(id)initWithListener:(id)arg1 ;
-(id<SFFeedbackListener>)strongListener;
@end

