/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class EspressoContext;

@interface EspressoNetwork : NSObject {

	shared_ptr<Espresso::net>* _net;

}

@property (readonly) shared_ptr<Espresso::net>* net;              //@synthesize net=_net - In the implementation block
@property (readonly) unsigned long long layers_size; 
@property (readonly) EspressoContext * ctx; 
-(EspressoContext *)ctx;
-(shared_ptr<Espresso::net>*)net;
-(id)initWithJSFile:(const char*)arg1 context:(id)arg2 computePath:(int)arg3 ;
-(unsigned long long)layers_size;
-(id)initWithJSFile:(const char*)arg1 binSerializerId:(const char*)arg2 context:(id)arg3 computePath:(int)arg4 ;
-(void)wipe_layers_blobs;
@end

