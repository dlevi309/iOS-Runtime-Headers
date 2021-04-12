/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


#import <CoreLocation/CoreLocation-Structs.h>
@interface CLStateTracker : NSObject {

	unsigned long long _handle;

}

@property (nonatomic,readonly) void* identifier; 
+(unsigned long long)trackerStateSize;
+(const char*)trackerStateTypeName;
-(void)dealloc;
-(void*)identifier;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
@end

