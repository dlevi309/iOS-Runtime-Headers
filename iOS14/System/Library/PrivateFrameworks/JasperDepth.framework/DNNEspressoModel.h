/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface DNNEspressoModel : NSObject {

	int _engine;
	int _storage;
	void* _plan;
	void* _ctx;
	SCD_Struct_DN67* _net;

}

@property (assign,nonatomic) int engine;                        //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) void* plan;                        //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) void* ctx;                         //@synthesize ctx=_ctx - In the implementation block
@property (assign,nonatomic) SCD_Struct_DN67* net;              //@synthesize net=_net - In the implementation block
@property (assign) int storage;                                 //@synthesize storage=_storage - In the implementation block
-(void*)plan;
-(int)engine;
-(void*)ctx;
-(SCD_Struct_DN67*)net;
-(void)setStorage:(int)arg1 ;
-(void)setEngine:(int)arg1 ;
-(int)storage;
-(void)setCtx:(void*)arg1 ;
-(void)setPlan:(void*)arg1 ;
-(void)setNet:(SCD_Struct_DN67*)arg1 ;
-(void)dealloc;
-(BOOL)initializeInputOutputBlobs;
-(BOOL)loadNetworkWithName:(id)arg1 runningMode:(long long)arg2 ;
@end

