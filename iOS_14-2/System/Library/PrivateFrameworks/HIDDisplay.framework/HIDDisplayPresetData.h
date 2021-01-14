/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)get:(id*)arg1 ;
-(BOOL)writable;
-(BOOL)valid;
-(id)initWithDisplayDevice:(id)arg1 index:(long long)arg2 ;
-(void)setHidDisplay:(id)arg1 ;
-(id)hidDisplay;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end

