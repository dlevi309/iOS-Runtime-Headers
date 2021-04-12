/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEvent.h>

@class NSString;

@interface HMIVideoEventEntry : HMFObject <HMIVideoEvent> {

	id _value;
	SCD_Struct_HM3 _time;

}

@property (readonly) SCD_Struct_HM3 time;                           //@synthesize time=_time - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_HM3)time;
-(id)value;
-(id)initWithValue:(id)arg1 time:(SCD_Struct_HM3)arg2 ;
@end

