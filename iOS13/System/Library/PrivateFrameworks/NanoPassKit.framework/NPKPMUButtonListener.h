/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
#import <NanoPassKit/NanoPassKit-Structs.h>
@class NSObject;

@interface NPKPMUButtonListener : NSObject {

	/*^block*/id _buttonHandler;
	IOHIDEventSystemClientRef _hidSystemClient;
	NSObject*<OS_dispatch_queue> _hidSystemQueue;

}

@property (nonatomic,copy) id buttonHandler;                                           //@synthesize buttonHandler=_buttonHandler - In the implementation block
@property (assign,nonatomic) IOHIDEventSystemClientRef hidSystemClient;                //@synthesize hidSystemClient=_hidSystemClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hidSystemQueue;              //@synthesize hidSystemQueue=_hidSystemQueue - In the implementation block
-(void)dealloc;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)setButtonHandler:(id)arg1 ;
-(id)buttonHandler;
-(void)_initializeHIDClient;
-(void)_handleButtonEvent:(IOHIDEventRef)arg1 ;
-(void)setHidSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(void)setHidSystemQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IOHIDEventSystemClientRef)hidSystemClient;
-(NSObject*<OS_dispatch_queue>)hidSystemQueue;
@end

