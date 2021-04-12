/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


#import <Proximity/Proximity-Structs.h>
@interface PRSuperframeStats : NSObject {

	shared_ptr<rose::ResponderSuperframeStats>* _stats;

}

@property (readonly) ResponderSuperframeStats stats; 
-(ResponderSuperframeStats)stats;
-(id)initWithStats:(const ResponderSuperframeStats*)arg1 ;
@end

