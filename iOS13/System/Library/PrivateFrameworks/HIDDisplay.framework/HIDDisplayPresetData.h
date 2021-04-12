/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/


@class HIDDisplayPresetInterface, NSData;

@interface HIDDisplayPresetData : NSObject {

	long long _index;
	HIDDisplayPresetInterface* _deviceRef;

}

@property (readonly) BOOL valid; 
@property (readonly) BOOL writable; 
@property (readonly) NSData * uniqueID; 
-(NSData *)uniqueID;
-(BOOL)valid;
-(BOOL)writable;
-(id)get:(id*)arg1 ;
-(id)initWithDisplayDevice:(id)arg1 index:(long long)arg2 ;
-(void)setHidDisplay:(id)arg1 ;
-(id)hidDisplay;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end

