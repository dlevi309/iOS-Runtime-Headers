/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@protocol OS_dispatch_queue;
@class NUComposition, NSObject, NUColorSpace, NSString, NUImageDataRequest;

@interface NUColorSampler : NSObject <NUTimeBased> {

	BOOL _shouldCoalesceUpdates;
	NUComposition* _composition;
	NSObject*<OS_dispatch_queue> _responseQueue;
	long long _sampleRadius;
	NUColorSpace* _colorSpace;
	NSString* _name;
	NUImageDataRequest* _request;

}

@property (nonatomic,readonly) NUImageDataRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NUComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (assign,nonatomic) long long sampleRadius;                                  //@synthesize sampleRadius=_sampleRadius - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                               //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) BOOL shouldCoalesceUpdates;                              //@synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(SCD_Struct_NU6)time;
-(void)setTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(NUComposition *)composition;
-(NUImageDataRequest *)request;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(void)setComposition:(NUComposition *)arg1 ;
-(id)_pipelineFilters;
-(void)setShouldCoalesceUpdates:(BOOL)arg1 ;
-(BOOL)shouldCoalesceUpdates;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithComposition:(id)arg1 responseQueue:(id)arg2 ;
-(void)sampleColorAt:(SCD_Struct_NU7)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureRequest:(id)arg1 forSamplingAtPoint:(SCD_Struct_NU7)arg2 ;
-(long long)sampleRadius;
-(void)setSampleRadius:(long long)arg1 ;
@end

