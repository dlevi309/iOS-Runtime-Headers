/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)wipe_layers_blobs;
-(id)initWithJSFile:(const char*)arg1 context:(id)arg2 computePath:(int)arg3 ;
-(id)initWithJSFile:(const char*)arg1 binSerializerId:(const char*)arg2 context:(id)arg3 computePath:(int)arg4 ;
-(unsigned long long)layers_size;
-(shared_ptr<Espresso::net>*)net;
@end

