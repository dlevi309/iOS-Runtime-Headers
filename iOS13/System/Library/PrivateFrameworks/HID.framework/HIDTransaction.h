/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@interface HIDTransaction : NSObject {

	IOHIDTransactionRef _transaction;

}

@property (assign) long long direction; 
-(void)dealloc;
-(id)description;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)commitElements:(id)arg1 error:(out id*)arg2 ;
@end

