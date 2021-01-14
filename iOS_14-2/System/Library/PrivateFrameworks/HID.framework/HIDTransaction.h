/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@interface HIDTransaction : NSObject {

	IOHIDTransactionRef _transaction;

}

@property (assign) long long direction; 
-(long long)direction;
-(id)initWithDevice:(id)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)commitElements:(id)arg1 error:(out id*)arg2 ;
@end

