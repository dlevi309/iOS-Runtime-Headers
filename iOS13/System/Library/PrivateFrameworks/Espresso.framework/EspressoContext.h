/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoContext : NSObject {

	shared_ptr<Espresso::abstract_context>* _ctx;

}

@property (readonly) shared_ptr<Espresso::abstract_context>* ctx;              //@synthesize ctx=_ctx - In the implementation block
@property (readonly) int platform; 
-(int)platform;
-(shared_ptr<Espresso::abstract_context>*)ctx;
-(id)initWithContext:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(id)initWithPlatform:(int)arg1 ;
-(void)set_priority:(BOOL)arg1 low_priority_max_ms_per_command_buffer:(float)arg2 gpu_priority:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 andWisdomParams:(id)arg2 ;
-(id)initWithNetworkContext:(id)arg1 ;
@end

