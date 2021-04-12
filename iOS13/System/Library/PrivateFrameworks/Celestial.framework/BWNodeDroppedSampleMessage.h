/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWNodeMessage.h>

@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage {

	BWDroppedSample* _droppedSample;

}

@property (readonly) BWDroppedSample * droppedSample; 
+(id)newMessageWithDroppedSample:(id)arg1 ;
-(void)dealloc;
-(BWDroppedSample *)droppedSample;
-(id)_initWithDroppedSample:(id)arg1 ;
@end

