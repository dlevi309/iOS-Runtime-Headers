/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
*/


#import <IOKit/IOKit-Structs.h>
@class NSString;

@interface HIDConnection : NSObject {

	SCD_Struct_HI11* _connection;

}

@property (readonly) NSString * uuid; 
-(NSString *)uuid;
-(unsigned long long)_cfTypeID;
-(id)description;
-(void)dealloc;
@end

