/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}

@property (readonly) BOOL valid; 
-(BOOL)invalidate:(id*)arg1 ;
-(BOOL)valid;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(id)get:(id*)arg1 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end

