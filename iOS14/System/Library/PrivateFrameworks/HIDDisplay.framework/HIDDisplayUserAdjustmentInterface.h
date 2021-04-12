/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}

@property (readonly) BOOL valid; 
-(BOOL)invalidate:(id*)arg1 ;
-(id)get:(id*)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)valid;
-(id)initWithContainerID:(id)arg1 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end

