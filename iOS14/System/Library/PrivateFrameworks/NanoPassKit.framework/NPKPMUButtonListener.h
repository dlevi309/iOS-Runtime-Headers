/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <NanoPassKit/NPKButtonListener.h>

@interface NPKPMUButtonListener : NPKButtonListener {

	IOHIDEventSystemClientRef _hidSystemClient;

}

@property (assign,nonatomic) IOHIDEventSystemClientRef hidSystemClient;              //@synthesize hidSystemClient=_hidSystemClient - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_handleButtonEvent:(IOHIDEventRef)arg1 ;
-(void)_initializeHIDClient;
-(void)setHidSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(IOHIDEventSystemClientRef)hidSystemClient;
@end

