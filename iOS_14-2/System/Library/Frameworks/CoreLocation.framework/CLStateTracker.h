/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


#import <CoreLocation/CoreLocation-Structs.h>
@interface CLStateTracker : NSObject {

	unsigned long long _handle;

}

@property (nonatomic,readonly) void* identifier; 
+(const char*)trackerStateTypeName;
+(unsigned long long)trackerStateSize;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
-(void*)identifier;
-(void)dealloc;
@end

