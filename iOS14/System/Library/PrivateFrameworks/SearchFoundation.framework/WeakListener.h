/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/


@protocol SFFeedbackListener;
@interface WeakListener : NSObject {

	id<SFFeedbackListener> _weakListener;

}

@property (nonatomic,readonly) id<SFFeedbackListener> strongListener; 
-(id<SFFeedbackListener>)strongListener;
-(id)initWithListener:(id)arg1 ;
@end

