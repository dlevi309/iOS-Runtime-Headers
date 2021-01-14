/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NPKButtonListener : NSObject {

	/*^block*/id _buttonHandler;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (nonatomic,copy) id buttonHandler;                                         //@synthesize buttonHandler=_buttonHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setButtonHandler:(id)arg1 ;
-(id)buttonHandler;
-(id)initWithHandlerQueue:(id)arg1 ;
-(/*^block*/id)_handlerQueue_buttonHandler;
@end

