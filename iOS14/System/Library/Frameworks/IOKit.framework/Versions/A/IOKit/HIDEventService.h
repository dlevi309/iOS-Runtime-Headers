/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
*/


#import <IOKit/IOKit-Structs.h>
@interface HIDEventService : NSObject {

	SCD_Struct_HI6* _service;

}

@property (readonly) unsigned long long serviceID; 
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)serviceID;
-(id)propertyForKey:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 ;
-(BOOL)conformsToUsagePage:(long long)arg1 usage:(long long)arg2 ;
-(id)eventMatching:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)description;
-(void)dealloc;
@end

